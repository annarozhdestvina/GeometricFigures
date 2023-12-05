#include <iostream>
#include <vector>

#include "Controller/Controller.h"

#include "View/ConsoleView.h"

int main() {
    controller::Controller controller;
    view::ConsoleView view(&controller);
    view.startEventLoop();

    return 0;
}
