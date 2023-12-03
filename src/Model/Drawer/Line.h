#ifndef LINE_H
#define LINE_H

#include <iostream>
#include <cmath>
#include <cassert>

#include "../Point/Point.h"

class Area;

namespace Drawer {
   
class Line {

public:
    Line(const Point& a, const Point& b, Area& area);

private:
    void horizontal(const Point& a, const Point& b, Area& area);

    void vertical(const Point& a, const Point& b, Area& area);

    bool isHorizontal(const Point& a, const Point& b); 
}; 

} // namespace Drawer

#endif // LINE_H