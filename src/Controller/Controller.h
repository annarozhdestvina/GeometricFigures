#ifndef EXAMPLECONTROLLER_H
#define EXAMPLECONTROLLER_H

#include <vector>
#include <memory>
#include "../Model/FigureInterface.h"

class Controller {
private:
    std::vector<std::unique_ptr<FigureInterface> > _objects;
public:

    void DrawAll(AreaInterface& area);

    void AddCircle();

    void AddSquare();

    void AddTriangle();

    void Clean();
};

#endif
