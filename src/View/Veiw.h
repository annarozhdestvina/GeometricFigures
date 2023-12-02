#ifndef CONSOLEVIEW_H
#define CONSOLEVIEW_H

#include "exampleController.h"

enum class Choice
{
    CIRCLE = 1,
    SQUARE = 2,
    TRIANGLE = 3,
    CLEAN = 4,
    EXIT = 0,
    NONE = -1,
};

class ConsoleView
{
    private:
        ExampleController *controller;
    public:
        ConsoleView(ExampleController *c):controller(c){};
        void displayMenu();
        int performChoice();
        double performNumericInput();
        void startEventLoop();
};

#endif
