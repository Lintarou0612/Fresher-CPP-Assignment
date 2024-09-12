#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include <polygon.h>

class Quadrilateral : public Polygon
{
public:
    Quadrilateral();
    double Perimeter();
    double Area();
};

#endif // QUADRILATERAL_H
