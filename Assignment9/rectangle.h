#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <shape.h>
#include "point.h"
class Rectangle : public Shape
{
    Point m_center;
    double m_width;
    double m_length;
    static int count;
    std::string deleteExtraSpaces(std::string str);
public:
    Rectangle();
    ~Rectangle();
    double getPerimeter() override;
    double getArea() override;
    void fromString(const std::string& str) override;
    std::string toString() override;
};

#endif // RECTANGLE_H
