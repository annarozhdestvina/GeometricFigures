#ifndef FIGUREINTERFACE_H
#define FIGUREINTERFACE_H


class FigureInterface {
public:
    virtual bool Draw() const = 0;
    virtual ~FigureInterface() {}
};


#endif // FIGUREINTERFACE_H