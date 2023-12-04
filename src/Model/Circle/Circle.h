#ifndef CIRCLE_CIRCLE_H
#define CIRCLE_CIRCLE_H

#include "../FigureInterface.h"
#include "../Point/Point.h"
#include "../Drawer/DrawerInterface.h"

class DrawerCircle;

class Circle : public FigureInterface {
private:
    Point _center;
    double _radius;
    DrawerCircle* _defaultDrawer;

public:
    Circle(double x = 0.0, double y = 0.0, double r = 1.0);
    bool Draw(AreaInterface& area, const DrawerInterface* = nullptr) const override;
    friend class DrawerCircle;
};

class DrawerCircle : public DrawerInterface {
public:
    bool Draw(const FigureInterface* object, AreaInterface& area) const override;
};





#endif // CIRCLE_CIRCLE_H