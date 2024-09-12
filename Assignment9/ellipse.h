#ifndef ELLIPSE_H
#define ELLIPSE_H
#include <shape.h>
#include "point.h"
class Ellipse : public Shape
{
    Point m_center;
    Point m_radius;
    static int count;
    std::string deleteExtraSpaces(std::string str);
public:
    Ellipse();
    ~Ellipse();
    double getPerimeter() override;
    double getArea() override;
    void fromString(const std::string& str) override;
    std::string toString() override;
};

#endif // ELLIPSE_H
