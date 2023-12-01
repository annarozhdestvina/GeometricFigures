#include <iostream>
#include <vector>

#include "FigureInterface.h"
#include "Circle/Circle.h"
#include "Triangle/Triangle.h"
#include "Square/Square.h"
#include "Point/Point.h"
#include "Drawer/Area.h"


void DrawAll(const std::vector<FigureInterface*>& objects, Area& area) {
    for(const FigureInterface* i : objects) {
        i->Draw(area);
    }
}

int main() {
    std::vector<FigureInterface*> objects;
    Triangle t{Point{0.0, 0.0}, Point{3.5, 8.7}, Point{6.7, 9.8}};
    objects.push_back(&t);

    Square s{Point{0.0, 0.0}, 6.7};
    objects.push_back(&s);

    Circle c(4.5, 8.0, 7.0);
    objects.push_back(&c);

    Area a1(15, 60);

    DrawAll(objects, a1);

    // DrawShapes(&t);


    // DrawShapes(&s);
    
    
    // DrawShapes(&c);

    // Poligon p{Point{0.0, 0.0}, Point{3.5, 8.7}, Point{6.7, 9.8}, Point{3.5, 8.7}, Point{6.7, 9.8}};
    // DrawPoligon2(t);
    // std::cout <<'\n';
    // DrawPoligon2(p);

    // std::cout <<'\n';
    // DrawPoligon3(t);
    // std::cout <<'\n';
    // DrawPoligon3(p);


    // std::vector<ObjectInterface*> shapes;  // чтобы не было обрезки поэтому вектор указателей
    // shapes.push_back(&c);
    // for(const auto& shape : shapes) {
    //     // shape->Draw();
    // }


    // ObjectInterface o;
    


    return 0;
}