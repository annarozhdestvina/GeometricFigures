#ifndef FIGUREINTERFACE_H
#define FIGUREINTERFACE_H

class AreaInterface;
class DrawerInterface;

class FigureInterface {
public:
    virtual bool Draw(AreaInterface& area, const DrawerInterface* = nullptr) const = 0;
    virtual ~FigureInterface() {}
};


#endif // FIGUREINTERFACE_H