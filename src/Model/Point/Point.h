#ifndef Point_H
#define Point_H

struct Point {  
    double _x;
    double _y;

    Point(double x = 0.0, double y = 0.0): _x{x}, _y{y} {}
};


#endif // Point_H