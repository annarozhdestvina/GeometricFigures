#include <iostream>
#include <vector>

#include "Controller/Controller.h"

#include "View/ConsoleView.h"


// void DrawAll(const std::vector<FigureInterface*>& objects, Area& area) {
//     for(const FigureInterface* i : objects) {
//         i->Draw(area);
//     }
// }

int main() {
    Controller controller;
    ConsoleView view(&controller);
    view.startEventLoop();
    


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
