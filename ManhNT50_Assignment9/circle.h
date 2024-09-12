#ifndef CIRCLE_H
#define CIRCLE_H

#include <shape.h>
#include "point.h"

class Circle : public Shape
{
private:
    static int count;
    Point m_center;
    double m_radius;
    std::string deleteExtraSpaces(std::string str);
public:
    Circle();
    ~Circle();
    double getPerimeter() override;
    double getArea() override;
    void fromString(const std::string& str) override;
    std::string toString() override;
};

#endif // CIRCLE_H
