#ifndef TRIANGLE_H
#define TRIANGLE_H

// #include "../Poligon/Poligon.h"
#include "../FigureInterface.h"
#include "../Point/Point.h"

class DrawerTriangle;

class Triangle : public FigureInterface {  
public:
    Point _a;
    Point _b;
    Point _c;
    Triangle(Point a = Point(), Point b = Point(3.5, 3.0), Point c = Point(4.5, 7.0));
    bool Draw(AreaInterface& area, const DrawerInterface* = nullptr) const override;

private:
    DrawerTriangle* _defaultDrawer;
    
public:
    friend class DrawerTriangle;
};

class DrawerTriangle {
public:
    bool Draw(const FigureInterface* object, AreaInterface& area);
};



#endif // TRIANGLE_H