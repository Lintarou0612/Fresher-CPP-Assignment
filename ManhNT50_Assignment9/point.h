#ifndef POINT_H
#define POINT_H


class Point
{
private:
    double x;
    double y;
public:
    Point();
    ~Point();
    Point(double, double);
    double getX() const;
    void setX(double value);
    double getY() const;
    void setY(double value);

    Point operator+(const Point& point);
    Point operator-(const Point& point);
    Point operator*(const Point& point);
    friend Point operator*(const Point& point, double value);
    friend Point operator*(double value, const Point& point);
    //Point operator/(const Point& point);
    Point operator=(const Point& point);
    Point operator+=(const Point& point);
    Point operator-=(const Point& point);
    Point operator*=(const Point& point);
    Point operator*=(double value);
    //Point operator/=(const Point& point);

    double Distance(const Point &other) const;
    double Dot(Point &point1, Point &point2);
    void Display();
    void Input();
};

#endif // POINT_H
