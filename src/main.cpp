#include <iostream>
#include <vector>

#include "Model/FigureInterface.h"
#include "Model/Circle/Circle.h"
#include "Model/Triangle/Triangle.h"
#include "Model/Square/Square.h"
#include "Model/Point/Point.h"
#include "Model/Drawer/Area.h"


void DrawAll(const std::vector<FigureInterface*>& objects, Area& area) {
    for(const FigureInterface* i : objects) {
        i->Draw(area);
    }
}

int main() {
    std::vector<FigureInterface*> objects;
    Triangle t{Point{1.0, 1.0}, Point{35.5, 1.0}, Point{35.6, 8.8}};
    objects.push_back(&t);

    Triangle t1{Point{1.0, 2.0}, Point{36.5, 2.0}, Point{36.6, 8.8}};
    objects.push_back(&t1);

    // Square s{Point{0.0, 0.0}, 6.7};
    // objects.push_back(&s);

    Circle c(4.5, 8.0, 7.0);
    objects.push_back(&c);

    Area a1(15, 60);

    DrawAll(objects, a1);
    a1.Print();
    


    return 0;
}

// #include "consoleView.h"

// int main() {
//     ExampleModel model;
//     ExampleController controller(&model);
//     ConsoleView view(&controller);
//     view.startEventLoop();
//     return 1;
// }
