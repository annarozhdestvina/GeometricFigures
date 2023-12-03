#ifndef LINE_H
#define LINE_H

#include <iostream>
#include <cmath>
#include <cassert>

#include "../Point/Point.h"
#include "Area.h"

namespace Drawer {

class Line {
private:
    void horizontal(const Point& a, const Point& b, Area& area) {
        const int x_steps = std::abs(a._x - b._x);
        const int x_start = a._x < b._x ? a._x : b._x;
        const int x_finish = a._x > b._x ? a._x : b._x;
        for(int x = x_start; x < x_finish; ++x) {
            const int y = (x - a._x) * (b._y - a._y) / (b._x - a._x) + a._y;
            if(y >= 0 && y < area.GetRows()) {
                area.Get()[y][x] = '*';
            } 
        } 
    }

    void vertical(const Point& a, const Point& b, Area& area) {
        const int y_steps = std::abs(a._y - b._y);
        const int y_start = a._y < b._y ? a._y : b._y;
        const int y_finish = a._y > b._y ? a._y : b._y;
        for(int y = y_start; y < y_finish; ++y) {
            const int x = (y - a._y) * (b._x - a._x) / (b._y - a._y) + a._x;
            if(x >= 0 && x < area.GetCols()) {
                area.Get()[y][x] = '*';
            } 
        } 
    }

    bool isHorizontal(const Point& a, const Point& b) {
        return std::abs(a._x - b._x) > std::abs(a._y - b._y);
    }

public:
    Line(const Point& a, const Point& b, Area& area) {
        assert(a._x <= area.GetCols() && "inappropriate x");
        assert(a._y <= area.GetRows() && "inappropriate y");

        assert(a._x > 0 && "inappropriate x");
        assert(a._y > 0  && "inappropriate y");

        assert(a._x != b._x && "zero division");

        if(isHorizontal(a, b))
            horizontal(a, b, area);
        else
            vertical(a, b, area);
    } 
}; 

} // namespace Drawer

#endif // LINE_H