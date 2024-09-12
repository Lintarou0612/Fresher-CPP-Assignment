#include <iostream>
#include "storage.h"
#include "fraction.h"

using namespace std;
int main()
{
    int i[] = {5, 3, 2, 6, 1, 7, 8, 10};
    Storage<int> s1(i, 8);
    cout << s1.max() << endl; //print 10
    cout << s1.min() << endl; //print 1
    s1.sort();
    cout << s1 << endl; //print 1, 2, 3, 5, 6, 7, 8, 10
    Fraction frag[] = {Fraction(1, 2), Fraction(3, 4),
                       Fraction(2, 6), Fraction(1, 3)};
    Storage<Fraction> s2(frag, 4);
    cout << s2.max() << endl;
    cout << s2.min() << endl;
    s2.sort();
    cout << s2 << endl;
    return 0;
}
