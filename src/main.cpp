#include <iostream>
#include <vector>

#include "Model/FigureInterface.h"
#include "Model/Circle/Circle.h"
#include "Model/Triangle/Triangle.h"
#include "Model/Square/Square.h"
#include "Model/Point/Point.h"
#include "Model/Drawer/Area.h"

#include "Controller/Controller.h"


// void DrawAll(const std::vector<FigureInterface*>& objects, Area& area) {
//     for(const FigureInterface* i : objects) {
//         i->Draw(area);
//     }
// }

int main() {
   Controller controller;
   controller.AddAll();
    


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
