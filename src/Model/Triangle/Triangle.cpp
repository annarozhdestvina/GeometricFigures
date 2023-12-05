#include "Triangle.h"

#include <iostream>

#include "../../Protocol/AreaInterface.h"
#include "../Drawer/DrawerInterface.h"
#include "../Drawer/Line.h"

namespace model {

static DrawerTriangle s_drawerTriangle;

Triangle::Triangle(Point a, Point b, Point c)
    : _a(a)
    , _b(b)
    , _c(c)
    , _defaultDrawer { &s_drawerTriangle }
{
}

bool Triangle::Draw(protocol::AreaInterface& area,
    const DrawerInterface* drawer) const
{
    if (drawer)
        return drawer->Draw(this, area);

    if (_defaultDrawer)
        return _defaultDrawer->Draw(this, area);

    return false;
}

bool DrawerTriangle::Draw(const FigureInterface* object,
    protocol::AreaInterface& area)
{
    if (const Triangle* triangle = dynamic_cast<const Triangle*>(object)) {
        drawer::Line(triangle->_a, triangle->_b, area);
        drawer::Line(triangle->_b, triangle->_c, area);
        drawer::Line(triangle->_c, triangle->_a, area);
        return true;
    }
    return false;
}

} // namespace model