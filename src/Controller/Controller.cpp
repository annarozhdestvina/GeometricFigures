#include "Controller.h"
#include <vector>

#include "../Model/FigureInterface.h"
#include "../Model/Circle/Circle.h"
#include "../Model/Triangle/Triangle.h"
#include "../Model/Square/Square.h"
#include "../Model/Point/Point.h"
#include "../Protocol/AreaInterface.h"


void Controller::DrawAll(AreaInterface& area) {
    for(const std::unique_ptr<FigureInterface>& i : _objects) {
        i->Draw(area);
    }
}

void Controller::AddCircle() {
    std::unique_ptr<FigureInterface> c(std::make_unique<Circle>(6.5, 8.0, 5.0));
    _objects.push_back(std::move(c));    
}

void Controller::AddSquare() {
    std::unique_ptr<FigureInterface> s(std::make_unique<Square>(Point{40.0, 3.0}, Point{40.0, 16.0}, Point{56.0, 16.0}, Point{56.0, 3.0}));
    _objects.push_back(std::move(s));
}

void Controller::AddTriangle() {
    std::unique_ptr<FigureInterface> t(std::make_unique<Triangle>(Point{1.0, 1.0}, Point{35.5, 1.0}, Point{35.6, 8.8}));
    _objects.push_back(std::move(t));
}

void Controller::Clean() {
    _objects.clear();
}