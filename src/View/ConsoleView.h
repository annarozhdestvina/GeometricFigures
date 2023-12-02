#ifndef CONSOLEVIEW_H
#define CONSOLEVIEW_H

#include "../Model/Drawer/Area.h"

class Controller;

enum class Choice : char;

class ConsoleView
{
    private:
        Controller *_controller;
        Area _area;
    public:
        ConsoleView(Controller *c): _controller(c), _area(10, 40) {};
        void displayMenu();
        Choice performChoice();
        double performNumericInput();
        void startEventLoop();
};

#endif
