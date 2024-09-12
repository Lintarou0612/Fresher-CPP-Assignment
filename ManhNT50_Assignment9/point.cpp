#include "point.h"
#include <iostream>
#include <cmath>

double Point::getX() const
{
    return x;
}

void Point::setX(double value)
{
    x = value;
}

double Point::getY() const
{
    return y;
}

void Point::setY(double value)
{
    y = value;
}

Point Point::operator+(const Point &point)
{
    return Point {x + point.x, y + point.y};
}

Point Point::operator-(const Point &point)
{
    return Point {x - point.x, y - point.y};
}

Point Point::operator*(const Point &point)
{
    return Point {x * point.x, y * point.y};
}

Point operator*(const Point &point, double value)
{
    return Point {point.x * value, point.y * value};
}

Point operator*(double value, const Point &point)
{
    return Point {point.x * value, point.y * value};
}

Point Point::operator=(const Point &point)
{
    if(this != &point)
    {
        x = point.x;
        y = point.y;
    }
    return *this;
}

Point Point::operator+=(const Point &point)
{
    this->x = this->x + point.x;
    this->y = this->y + point.y;
    return *this;
}

Point Point::operator-=(const Point &point)
{
    this->x = this->x - point.x;
    this->y = this->y - point.y;
    return *this;
}

Point Point::operator*=(const Point &point)
{
    this->x = this->x * point.x;
    this->y = this->y * point.y;
    return *this;
}

Point Point::operator*=(double value)
{
    this->x = this->x * value;
    this->y = this->y * value;
    return *this;
}

double Point::Distance(const Point& other) const {
    double dx = x - other.x;
    double dy = y - other.y;
    return std::sqrt(dx * dx + dy * dy);
}

double Point::Dot(Point &point1, Point &point2)
{
    return point1.x * point2.x + point1.y * point2.y;
}

void Point::Display()
{
    std::cout << "Point: (" << x << ", " << y << ")." << std::endl;
}

Point::Point() : x{0.0}, y{0.0}
{
}

Point::~Point()
{
}

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}
