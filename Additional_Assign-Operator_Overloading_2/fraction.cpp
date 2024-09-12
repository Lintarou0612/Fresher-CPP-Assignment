#include "fraction.h"
#include <iostream>
using namespace std;
Fraction::Fraction(int num, int den = 1)
{
    numerator = num;
    denominator = den;
    if (den == 0) {
        cout << "Denominator cannot be zero!" << endl;
    }
}

void Fraction::simplify()
{
    int gcd = GCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}

int Fraction::GCD(int a, int b)
{
    while(b != 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

bool Fraction::operator<(Fraction &frac)
{
    frac.simplify();
    this->simplify();
    if(numerator * frac.denominator < frac.numerator * denominator)
        return true;
    return false;
}

bool Fraction::operator>(Fraction &frac)
{
    frac.simplify();
    this->simplify();
    if(numerator * frac.denominator > frac.numerator * denominator)
        return true;
    return false;
}

std::ostream& operator<<(std::ostream& os, const Fraction& frac)
{
    os << frac.numerator << "/" << frac.denominator;
    return os;
}
