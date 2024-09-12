#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
public:
    virtual ~Shape();
    virtual double getPerimeter() = 0;
    virtual double getArea() = 0;
    virtual void fromString(const std::string& str) = 0;
    virtual std::string toString() = 0;
};

#endif // SHAPE_H
