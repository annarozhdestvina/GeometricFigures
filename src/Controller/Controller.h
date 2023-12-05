#ifndef EXAMPLECONTROLLER_H
#define EXAMPLECONTROLLER_H

#include <vector>
#include <memory>
#include "../Model/FigureInterface.h"

namespace controller {

class Controller {
private:
    std::vector<std::unique_ptr<model::FigureInterface> > _objects;
public:

    void DrawAll(protocol::AreaInterface& area);

    void AddCircle();

    void AddSquare();

    void AddTriangle();

    void Clean();
};

} // namespace controller

#endif
