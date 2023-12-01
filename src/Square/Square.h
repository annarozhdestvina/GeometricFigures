#ifndef SQ_H
#define SQ_H

#include "../FigureInterface.h"
#include "../Point/Point.h"

class DrawerSquare;

class Square : public FigureInterface {  
private:
    Point _top_left;
    double _side;
    DrawerSquare* _drawer;
    
public:
    Square(Point top_left, double side); 
    bool Draw() const override;

    friend class DrawerSquare;
};

class DrawerSquare {
public:
    bool Draw(const Square&) const;
};




#endif // SQ_H