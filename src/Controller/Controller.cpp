#include "Controller.h"
// #include <iostream>
#include <vector>

#include "../Model/FigureInterface.h"
#include "../Model/Circle/Circle.h"
#include "../Model/Triangle/Triangle.h"
#include "../Model/Square/Square.h"
#include "../Model/Point/Point.h"
#include "../Model/Drawer/Area.h"


void Controller::AddAll() {
    // Triangle t{Point{1.0, 1.0}, Point{35.5, 1.0}, Point{35.6, 8.8}};
    // objects.push_back(&t);

    // Triangle t1{Point{1.0, 2.0}, Point{36.5, 2.0}, Point{36.6, 8.8}};
    // objects.push_back(&t1);

    // // Square s{Point{0.0, 0.0}, 6.7};
    // // objects.push_back(&s);

    // Circle c(4.5, 8.0, 7.0);
    // objects.push_back(&c);

    // Area a1(15, 60);

    // DrawAll(objects, a1);
    
    // a1.Print();
}

void Controller::DrawAll(Area& area) {
    for(const std::unique_ptr<FigureInterface>& i : _objects) {
        i->Draw(area);
    }
    area.Print();
}

void Controller::AddCircle() {
    /*
    Сначала был вектор указателей. И указатель указывал на локальную переменную  Circle c(4.5, 8.0, 7.0). Рисовалось это в другом методе,
    то есть к моменту отрисовки Circle c выйдет из области видимости как локальная переменная, а указатель в векторе останется указывать на
    этот Circle c. 
    Решение 1: использовать динамическое выделение памяти. Но тогда при разрушении вектора нужно сначала освободить память, на которую указывали
    элементы вектора (элементы вектора - указатели)
    Решение 2: использовать динамическое выделение памяти, с контролем за освобождением при помощи умного указателя. Умный указатель освободит память 
    сам в своем деструкторе. Поэтому вектор не указателей, а вектор умных указателей.
    */
    // std::unique_ptr<Circle> c(make_unique<Circle> (4.5, 8.0, 7.0));
    std::unique_ptr<FigureInterface> c(new Circle(4.5, 8.0, 7.0));
    _objects.push_back(std::move(c));    
}

void Controller::AddSquare() {
    std::unique_ptr<FigureInterface> s(new Square(Point{0.0, 0.0}, 6.7));
    _objects.push_back(std::move(s));
}

void Controller::AddTriangle() {
    std::unique_ptr<FigureInterface> t(new Triangle(Point{1.0, 1.0}, Point{35.5, 1.0}, Point{35.6, 8.8}));
    _objects.push_back(std::move(t));

}