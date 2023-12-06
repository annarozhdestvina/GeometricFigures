#ifndef CIRCLE_CIRCLE_H
#define CIRCLE_CIRCLE_H

#include "../../Drawer/DrawerInterface.h"
#include "../../FigureInterface.h"
#include "../../Point/Point.h"

namespace model {

class DrawerCircle;

class Circle : public FigureInterface {
private:
    Point _center;
    double _radius;
    DrawerCircle* _defaultDrawer;

public:
    Circle(double x = 0.0, double y = 0.0, double r = 1.0);
    bool Draw(protocol::AreaInterface& area,
        const DrawerInterface* = nullptr) const override;
    friend class DrawerCircle;
};

class DrawerCircle : public DrawerInterface {
public:
    bool Draw(const FigureInterface* object,
        protocol::AreaInterface& area) const override;
};

} // namespace model

#endif // CIRCLE_CIRCLE_H