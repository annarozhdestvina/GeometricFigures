#ifndef LINE_H
#define LINE_H

#include <iostream>
#include <cmath>
#include <cassert>

#include "../Point/Point.h"

class AreaInterface;

namespace Drawer {
   
class Line {

public:
    Line(const Point& a, const Point& b, AreaInterface& area);

private:
    void horizontal(const Point& a, const Point& b, AreaInterface& area);

    void vertical(const Point& a, const Point& b, AreaInterface& area);

    bool isHorizontal(const Point& a, const Point& b); 
}; 

} // namespace Drawer

#endif // LINE_H