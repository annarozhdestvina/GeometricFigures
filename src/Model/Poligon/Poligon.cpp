// #include "Poligon.h"
// #include <iostream>

// #include "../Drawer/Area.h"

// Poligon::Poligon(std::initializer_list<Point> list) {
//     _vertices.reserve(list.size());
//     for(const auto& point : list) {
//         _vertices.push_back(point);
//     }
// }

// bool Poligon::Draw(Area& area) const {
//     std::cout << "drawing poligon with points: ";
//     for(const auto& point : _vertices) {
//         std::cout << "( " << point._x << ',' << point._y << " ) ";
//     }

//     return true;
// }