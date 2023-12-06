#ifndef FIGUREINTERFACE_H
#define FIGUREINTERFACE_H

namespace protocol {

class AreaInterface;

}

namespace model {

class DrawerInterface;

class FigureInterface {
public:
    virtual bool Draw(protocol::AreaInterface& area,
        const DrawerInterface* = nullptr) const = 0;
    virtual ~FigureInterface() { }
};

} // namespace model

#endif // FIGUREINTERFACE_H