#ifndef FIGUREINTERFACE_H
#define FIGUREINTERFACE_H

class Area;
class DrawerInterface;

class FigureInterface {
public:
    virtual bool Draw(Area& area, const DrawerInterface* = nullptr) const = 0;
    virtual ~FigureInterface() {}
};


#endif // FIGUREINTERFACE_H