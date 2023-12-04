#ifndef DRAWERINTERFACE_H
#define DRAWERINTERFACE_H

class FigureInterface;
class AreaInterface;

class DrawerInterface {
public:
    virtual bool Draw(const FigureInterface* object, AreaInterface& area) const = 0;
    virtual ~DrawerInterface() {}
};


#endif // DRAWERINTERFACE_H