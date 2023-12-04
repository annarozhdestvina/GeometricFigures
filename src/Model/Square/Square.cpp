#include "Square.h"
#include <iostream>

#include "../Drawer/Area.h"
#include "../Drawer/Line.h"
#include "../Drawer/DrawerInterface.h"

static DrawerSquare s_drawerSquare;

Square::Square(Point a, Point b, Point c, Point d): _a(a), _b(b), _c(c), _d(d), _defaultDrawer{&s_drawerSquare}  {
    
}
// static DrawerSquare s_drawerSquare;

// Square::Square(Point top_left, double side): _top_left{top_left}, _side{side}, _drawer{&s_drawerSquare} {

// } 

bool Square::Draw(AreaInterface& area, const DrawerInterface* drawer) const {
    if (drawer) 
        return drawer->Draw(this, area);
        
    if (_defaultDrawer) 
        return _defaultDrawer->Draw(this, area);
    
    return false;
}

bool DrawerSquare::Draw(const FigureInterface* object, AreaInterface& area) const {
   if(const Square* triangle = dynamic_cast<const Square*>(object)) {
        Drawer::Line(triangle->_a, triangle->_b, area);
        Drawer::Line(triangle->_b, triangle->_c, area);
        Drawer::Line(triangle->_c, triangle->_d, area);
        Drawer::Line(triangle->_d, triangle->_a, area);
        return true;
    }
    return false;
}