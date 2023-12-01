#ifndef FIGUREINTERFACE_H
#define FIGUREINTERFACE_H

class Area;

class FigureInterface {
public:
    virtual bool Draw(Area& area) const = 0;
    virtual ~FigureInterface() {}
};


#endif // FIGUREINTERFACE_H