#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <shape.h>
#include "point.h"

class Triangle : public Shape
{
private:
    Point m_vertex1;
    Point m_vertex2;
    Point m_vertex3;
    static int count;
    std::string deleteExtraSpaces(std::string str);
public:
    Triangle();
    double getPerimeter();
    double getArea();
    void fromString(const std::string& str);
    std::string toString();
};

#endif // TRIANGLE_H
