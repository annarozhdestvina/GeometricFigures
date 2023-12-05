#include "Circle.h"

#include <cmath>
#include <iostream>

#include "../../Protocol/AreaInterface.h"
#include "../Drawer/DrawerInterface.h"

namespace model {

static DrawerCircle s_drawerCircle;

Circle::Circle(double x /* = 0.0*/, double y /* = 0.0*/, double r /* = 1.0*/)
    : _center { x, y }
    , _radius { r }
    , _defaultDrawer { &s_drawerCircle }
{
}

double
getDistance(double x1, double y1, double x2, double y2)
{
    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

bool Circle::Draw(protocol::AreaInterface& area, const DrawerInterface* drawer) const
{
    if (drawer)
        return drawer->Draw(this, area);

    if (_defaultDrawer)
        return _defaultDrawer->Draw(this, area);

    return false;
}

bool DrawerCircle::Draw(const FigureInterface* object,
    protocol::AreaInterface& area) const
{
    static constexpr double delta = 0.4;

    if (const Circle* circle = dynamic_cast<const Circle*>(object)) {
        for (int i = 0; i < area.GetRows(); ++i) {
            for (int j = 0; j < area.GetCols(); ++j) {
                const double distance = getDistance(circle->_center._x, circle->_center._y, i, j);

                if (circle->_radius - delta < distance && distance < circle->_radius + delta)
                    area.Get(i, j) = '*';
            }
        }
        return true;
    }
    return false;
}

} // namespace model
