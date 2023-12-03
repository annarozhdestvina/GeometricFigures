#include <iostream>
#include <cmath>

#include "Circle.h"
#include "../Drawer/Area.h"

static DrawerCircle s_drawerCircle;

Circle::Circle(double x /* = 0.0*/, double y /* = 0.0*/, double r /* = 1.0*/): _center{x, y}, _radius{r}, _drawer{&s_drawerCircle}  {

}

double getDistance(double x1, double y1, double x2, double y2) {
    return std::sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

bool Circle::Draw(Area& area) const {
    if(_drawer)
        return _drawer->Draw(*this, area);
    
    return false;
}

bool DrawerCircle::Draw(const Circle& object, Area& area) const {
    static constexpr double delta = 0.4;
    // std::cout << "<Drawing circle with center " << object._center._x << " and radius " << object._radius << ">\n";
    for(int i = 0; i < area.GetRows(); ++i) {
        for(int j = 0; j < area.GetCols(); ++j) {
            const double distance = getDistance(object._center._x, object._center._y, i, j);

            // if(distance from centre to point is between radius +- delta )
            if(object._radius - delta < distance && distance < object._radius + delta)
                area.Get(i, j) = '*';
        }
    }
    return true;
}
