#include "Triangle.h"
#include <iostream>


static DrawerTriangle s_drawerTriangle;

Triangle::Triangle(Point a, Point b, Point c)  {
    
}


bool Triangle::Draw(Area& area) const{
    std::cout << "drawing TRIANGLE with points: ";
   

    return false;
}

bool DrawerTriangle::Draw(const Triangle& object) {

    return true;
}

