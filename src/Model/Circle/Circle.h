#ifndef CIRCLE_CIRCLE_H
#define CIRCLE_CIRCLE_H

#include "../../FigureInterface.h"
#include "../Point/Point.h"

class DrawerCircle;

class Circle : public FigureInterface {
private:
    Point _center;
    double _radius;
    DrawerCircle* _drawer;

public:
    Circle(double x = 0.0, double y = 0.0, double r = 1.0);
    bool Draw(Area& area) const override;
    friend class DrawerCircle;
};

class DrawerCircle {
public:
    bool Draw(const Circle&, Area& area) const;
};





#endif // CIRCLE_CIRCLE_H