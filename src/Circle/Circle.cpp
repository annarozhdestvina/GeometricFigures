#include "Circle.h"
#include <iostream>

static DrawerCircle s_drawerCircle;

Circle::Circle(double x /* = 0.0*/, double y /* = 0.0*/, double r /* = 1.0*/): _center{x, y}, _radius{r}, _drawer{&s_drawerCircle}  {

}

bool Circle::Draw() const {
    if(_drawer)
        return _drawer->Draw(*this);
    
    return false;
}

bool DrawerCircle::Draw(const Circle& object) const {
    std::cout << "<Drawing circle with center " << object._center._x << " and radius " << object._radius << ">\n";
}

