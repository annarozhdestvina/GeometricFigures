#ifndef EXAMPLECONTROLLER_H
#define EXAMPLECONTROLLER_H

// #include "exampleModel.h"
#include <vector>

class Area;
class FigureInterface;

class Controller {
public:
    void AddAll();
    void DrawAll(const std::vector<FigureInterface*>& objects, Area& area);
};

#endif
