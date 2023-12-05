#ifndef DRAWERINTERFACE_H
#define DRAWERINTERFACE_H

namespace protocol {
class AreaInterface;
}

namespace model {
class FigureInterface;

class DrawerInterface {
public:
    virtual bool Draw(const model::FigureInterface* object,
        protocol::AreaInterface& area) const = 0;
    virtual ~DrawerInterface() { }
};

} // namespace model

#endif // DRAWERINTERFACE_H