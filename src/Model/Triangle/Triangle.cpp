#include "Triangle.h"
#include <iostream>

#include "../Drawer/Area.h"
#include "../Drawer/Line.h"

static DrawerTriangle s_drawerTriangle;

Triangle::Triangle(Point a, Point b, Point c): Poligon{{a, b, c}}, _drawer{&s_drawerTriangle}  {
    
}


bool Triangle::Draw(Area& area) const{
    if(_drawer)
        return _drawer->Draw(*this, area);

    return false;
}

bool DrawerTriangle::Draw(const Triangle& object, Area& area) {
    assert(object._vertices.size() == 3 && "wrong number of vertices");
    Drawer::Line(object._vertices[0], object._vertices[1], area);
    Drawer::Line(object._vertices[1], object._vertices[2], area);
    Drawer::Line(object._vertices[2], object._vertices[0], area);

    return true;
}

