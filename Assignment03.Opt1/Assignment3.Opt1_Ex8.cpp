#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(a == 0) return b;
    if(b == 0) return a;
    while( a != b) {
        if(a < b) b -= a;
        if(a > b) a -= b;
    }
    return a;
}

int lcm(int a, int b) {
    if(a == 0 && b == 0) return 0;
    return (a * b) / gcd(a, b);
}
int main() {
    int a, b;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;

    cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << '\n';
    cout << "LCM(" << a << ", " << b << ") = " << lcm(a, b) << '\n';
}