#include "Line.h"

#include <cassert>
#include <cmath>
#include <iostream>

#include "../../Protocol/AreaInterface.h"
#include "../Point/Point.h"

namespace drawer {

Line::Line(const Point& a, const Point& b, protocol::AreaInterface& area)
{
    assert(a._x <= area.GetCols() && "inappropriate x");
    assert(a._y <= area.GetRows() && "inappropriate y");

    assert(a._x > 0 && "inappropriate x");
    assert(a._y > 0 && "inappropriate y");

    if (isHorizontal(a, b))
        horizontal(a, b, area);
    else
        vertical(a, b, area);
}

void Line::horizontal(const Point& a, const Point& b, protocol::AreaInterface& area)
{
    assert(std::abs(b._x - a._x) > 1e-12 && "zero division");
    const int x_start = a._x < b._x ? a._x : b._x;
    const int x_finish = a._x > b._x ? a._x : b._x;
    for (int x = x_start; x < x_finish; ++x) {
        const int y = (x - a._x) * (b._y - a._y) / (b._x - a._x) + a._y;
        if (y >= 0 && y < area.GetRows()) {
            area.Get(y, x) = '*';
        }
    }
}

void Line::vertical(const Point& a, const Point& b, protocol::AreaInterface& area)
{
    assert(std::abs(b._y - a._y) > 1e-12 && "zero division");
    const int y_start = a._y < b._y ? a._y : b._y;
    const int y_finish = a._y > b._y ? a._y : b._y;
    for (int y = y_start; y < y_finish; ++y) {
        const int x = (y - a._y) * (b._x - a._x) / (b._y - a._y) + a._x;
        if (x >= 0 && x < area.GetCols()) {
            area.Get(y, x) = '*';
        }
    }
}

bool Line::isHorizontal(const Point& a, const Point& b)
{
    return std::abs(a._x - b._x) > std::abs(a._y - b._y);
}

} // namespace drawer
