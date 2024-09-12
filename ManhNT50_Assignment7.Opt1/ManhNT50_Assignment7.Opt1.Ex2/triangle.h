#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "polygon.h"

class Triangle : public Polygon
{
    static int count;
public:
    Triangle();
    double Perimeter();
    double Area();
    bool CheckPitago();
    void AddEdges();
    void PrintEdges();
};

#endif // TRIANGLE_H
