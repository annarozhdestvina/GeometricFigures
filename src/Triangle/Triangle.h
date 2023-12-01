#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "../FigureInterface.h"
#include "../Point/Point.h"

enum TriangleType {
    isosceles,
    rectanglar,
    general,
};

class DrawerTriangle;

class Triangle : public FigureInterface {  
public:
    Triangle(Point a = Point(), Point b = Point(3.5, 3.0), Point c = Point(4.5, 7.0));
    bool Draw(Area& area) const override;

    friend class DrawerTriangle;
};

class DrawerTriangle {
public:
    bool Draw(const Triangle& object);
};


#endif // TRIANGLE_H