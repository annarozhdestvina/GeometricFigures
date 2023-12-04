#ifndef DRAWERINTERFACE_H
#define DRAWERINTERFACE_H

class FigureInterface;
class Area;

class DrawerInterface {
public:
    virtual bool Draw(const FigureInterface* object, Area& area) const = 0;
    virtual ~DrawerInterface() {}
};


#endif // DRAWERINTERFACE_H