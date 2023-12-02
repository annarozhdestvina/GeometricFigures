#ifndef CONSOLEVIEW_H
#define CONSOLEVIEW_H

class Controller;

enum class Choice : char;

class ConsoleView
{
    private:
        Controller *controller;
    public:
        ConsoleView(Controller *c):controller(c){};
        void displayMenu();
        Choice performChoice();
        double performNumericInput();
        void startEventLoop();
};

#endif
