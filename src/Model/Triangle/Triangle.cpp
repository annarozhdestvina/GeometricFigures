#include "Triangle.h"
#include <iostream>

#include "../Drawer/Area.h"
#include "../Drawer/Line.h"
#include "../Drawer/DrawerInterface.h"

static DrawerTriangle s_drawerTriangle;

Triangle::Triangle(Point a, Point b, Point c): _a(a), _b(b), _c(c), _defaultDrawer{&s_drawerTriangle}  {
    
}


bool Triangle::Draw(Area& area, const DrawerInterface* drawer) const{
   if (drawer) 
        return drawer->Draw(this, area);
        
    if (_defaultDrawer) 
        return _defaultDrawer->Draw(this, area);
    
    return false;
}

bool DrawerTriangle::Draw(const FigureInterface* object, Area& area) {
    
    if(const Triangle* triangle = dynamic_cast<const Triangle*>(object)) {
        Drawer::Line(triangle->_a, triangle->_b, area);
        Drawer::Line(triangle->_b, triangle->_c, area);
        Drawer::Line(triangle->_c, triangle->_a, area);
        return true;
    }
    return false;
}

