#include <iostream>
#include "ConsoleView.h"
#include "../Controller/Controller.h"

enum class Choice : char
{
    CIRCLE = 1,
    SQUARE = 2,
    TRIANGLE = 3,
    DRAW = 4,
    CLEAN = 5,
    EXIT = 0,
    NONE = -1,
};


void ConsoleView::displayMenu()
{
    std::cout << "=========" << std::endl;
    std::cout << " M E N U " << std::endl;
    std::cout << "=========" << std::endl;
    std::cout << "1. ADD a CIRCLE" << std::endl;
    std::cout << "2. ADD a SQUARE" << std::endl;
    std::cout << "3. ADD a TRIANGLE" << std::endl;
    std::cout << "4. DRAW" << std::endl;
    std::cout << "5. CLEAN" << std::endl;
    std::cout << "0. Quit" << std::endl << std::endl;
}

Choice ConsoleView::performChoice()
{
    std::cout << "Input a menu item digit: ";
    int number = 0;
    std::cin >> number;
    return static_cast<Choice>(number);
} 

double ConsoleView::performNumericInput()
{    
    double number;
    std::cout << "Input a decimal number: ";
    std::cin >> number;
    return number;
} 

void ConsoleView::startEventLoop()
{
    while (true) 
    {
        displayMenu();
        switch (performChoice())
        {
        case Choice::CIRCLE:
            _controller->AddCircle();
            break;
        
        case Choice::SQUARE:
            _controller->AddSquare();
            break;

        case Choice::TRIANGLE:
            _controller->AddTriangle();
            break;

        case Choice::CLEAN:
            _controller->Clean(_area);
            break;

        case Choice::DRAW:
        std::cout <<"Drawimng\n";
            _controller->DrawAll(_area);
            _area.Print();
            break;

        case Choice::EXIT:
            exit(0);

        default:
            std::cout << "Wrong menu item number!";
            continue;
        }

    }
}
