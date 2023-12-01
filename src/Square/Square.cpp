#include "Square.h"
#include <iostream>


static DrawerSquare s_drawerSquare;

Square::Square(Point top_left, double side): _top_left{top_left}, _side{side}, _drawer{&s_drawerSquare} {

} 

bool Square::Draw() const {
    if(_drawer)
        return _drawer->Draw(*this);
    return true;
}

bool DrawerSquare::Draw(const Square& object) const {
    std::cout << "<Drawing square top_left x " << object._top_left._x << " and side " << object._side << ">\n";
    return true;
}