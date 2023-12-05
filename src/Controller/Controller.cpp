#include "Controller.h"
#include <vector>

#include "../Model/FigureInterface.h"
#include "../Model/Circle/Circle.h"
#include "../Model/Triangle/Triangle.h"
#include "../Model/Square/Square.h"
#include "../Model/Point/Point.h"
#include "../Protocol/AreaInterface.h"

namespace controller {

void Controller::DrawAll(protocol::AreaInterface& area) {
    for(const std::unique_ptr<model::FigureInterface>& i : _objects) {
        i->Draw(area);
    }
}

void Controller::AddCircle() {
    std::unique_ptr<model::FigureInterface> c(std::make_unique<model::Circle>(6.5, 8.0, 5.0));
    _objects.push_back(std::move(c));    
}

void Controller::AddSquare() {
    std::unique_ptr<model::FigureInterface> s(std::make_unique<model::Square>(Point{40.0, 3.0}, Point{40.0, 16.0}, Point{56.0, 16.0}, Point{56.0, 3.0}));
    _objects.push_back(std::move(s));
}

void Controller::AddTriangle() {
    std::unique_ptr<model::FigureInterface> t(std::make_unique<model::Triangle>(Point{1.0, 1.0}, Point{35.5, 1.0}, Point{35.6, 8.8}));
    _objects.push_back(std::move(t));
}

void Controller::Clean() {
    _objects.clear();
}

} // namespace controller