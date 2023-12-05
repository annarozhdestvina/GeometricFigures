#ifndef CONSOLEVIEW_H
#define CONSOLEVIEW_H

#include "../Protocol/Area.h"

namespace controller {
class Controller;
}

namespace view {

enum class Choice : char;

class ConsoleView
{
private:
    controller::Controller *_controller;
    protocol::Area _area;
public:
    ConsoleView(controller::Controller *c): _controller(c), _area(20, 60) {};
    void displayMenu();
    Choice performChoice();
    void startEventLoop();
};

} // namespace view

#endif
