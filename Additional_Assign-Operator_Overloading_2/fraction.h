#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
class Fraction
{
    int numerator;
    int denominator;
public:
    Fraction();
    Fraction(int, int);
    void simplify();
    static int GCD(int a, int b);
    bool operator<(Fraction& frac);
    bool operator>(Fraction& frac);
    friend std::ostream& operator<<(std::ostream& os, const Fraction& frac);
};

#endif // FRACTION_H
