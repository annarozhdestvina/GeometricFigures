#include "Square.h"

#include <iostream>

#include "../../../Protocol/AreaInterface.h"
#include "../../Drawer/DrawerInterface.h"
#include "../../Drawer/Line.h"

namespace model {

static DrawerSquare s_drawerSquare;

Square::Square(Point a, Point b, Point c, Point d)
    : _a(a)
    , _b(b)
    , _c(c)
    , _d(d)
    , _defaultDrawer { &s_drawerSquare }
{
}

bool Square::Draw(protocol::AreaInterface& area, const DrawerInterface* drawer) const
{
    if (drawer)
        return drawer->Draw(this, area);

    if (_defaultDrawer)
        return _defaultDrawer->Draw(this, area);

    return false;
}

bool DrawerSquare::Draw(const FigureInterface* object,
    protocol::AreaInterface& area) const
{
    if (const Square* triangle = dynamic_cast<const Square*>(object)) {
        drawer::Line(triangle->_a, triangle->_b, area);
        drawer::Line(triangle->_b, triangle->_c, area);
        drawer::Line(triangle->_c, triangle->_d, area);
        drawer::Line(triangle->_d, triangle->_a, area);
        return true;
    }
    return false;
}

} // namespace model