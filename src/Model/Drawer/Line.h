#ifndef LINE_H
#define LINE_H

#include <cassert>
#include <cmath>
#include <iostream>

#include "../Point/Point.h"

namespace protocol {

class AreaInterface;

} // namespace protocol

namespace drawer {

// Часть, из которых рисуются фигуры, содержащие прямые линии. используются рисовальщиками
class Line {
public:
    Line(const Point& a, const Point& b, protocol::AreaInterface& area);

private:
    void horizontal(const Point& a,
        const Point& b,
        protocol::AreaInterface& area);

    void vertical(const Point& a, const Point& b, protocol::AreaInterface& area);

    bool isHorizontal(const Point& a, const Point& b);
};

} // namespace drawer

#endif // LINE_H