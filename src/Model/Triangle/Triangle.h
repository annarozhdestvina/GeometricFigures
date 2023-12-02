#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "../Poligon/Poligon.h"

enum TriangleType {
    isosceles,
    rectanglar,
    general,
};

class DrawerTriangle;

class Triangle : public Poligon {  
public:
    Triangle(Point a = Point(), Point b = Point(3.5, 3.0), Point c = Point(4.5, 7.0));
    bool Draw(Area& area) const override;

private:
    TriangleType _type;

    DrawerTriangle* _drawer;
    
public:
    TriangleType GetType() const {
        return _type;
    }

    friend class DrawerTriangle;
};

class DrawerTriangle {
public:
    bool Draw(const Triangle& object, Area& area);
};



#endif // TRIANGLE_H