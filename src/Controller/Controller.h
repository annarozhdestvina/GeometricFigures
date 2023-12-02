#ifndef EXAMPLECONTROLLER_H
#define EXAMPLECONTROLLER_H

// #include "exampleModel.h"
#include <vector>
#include <memory>
#include "../Model/FigureInterface.h"
class Area;
// class FigureInterface;

class Controller {
private:
    std::vector<std::unique_ptr<FigureInterface> > _objects;
public:
    void AddAll();

    void DrawAll(Area& area);

    void AddCircle();

    void AddSquare();

    void AddTriangle();
};

#endif
