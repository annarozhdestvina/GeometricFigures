#include <iostream>
#include <vector>

#include "Controller/Controller.h"

#include "View/ConsoleView.h"

int main() {
    Controller controller;
    ConsoleView view(&controller);
    view.startEventLoop();

    return 0;
}
