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
    Triangle t{Point{1.0, 1.0}, Point{35.5, 1.0}, Point{35.6, 8.8}};
    objects.push_back(&t);

    // Square s{Point{0.0, 0.0}, 6.7};
    // objects.push_back(&s);

    // Circle c(4.5, 8.0, 7.0);
    // objects.push_back(&c);

    Area a1(15, 60);

    DrawAll(objects, a1);
    a1.Print();
    


    return 0;
}