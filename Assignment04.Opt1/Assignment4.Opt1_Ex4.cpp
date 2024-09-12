#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void solveSecondFunc(int a, int b, int c) {
    double x;
    double x2;
    double delta = b * b - 4 * a * c;
    if(a == 0) {
        if(b == 0) cout << "Phuong trinh vo nghiem" << '\n';
        else {
            x = -1.0 * c / b;
            cout << "Phuong trinh co 1 nghiem x = " << setprecision(3) <<  x << '\n';
        }
    }
    else {
        if(delta > 0) {
            x = (-1.0 * b + sqrt(delta)) / (2 * a);
            x2 = (-1.0 * b - sqrt(delta)) / (2 * a);
            cout << setprecision(3) << "Phuong trinh co 2 nghiem x1 = " << x << ", x2 = " << x2 << '\n';
        } else if(delta = 0)
            cout << setprecision(3) << "Phuong trinh co nghiem kep x1 = x2 = " << (-1.0 * b) / (2 * a) << '\n';
        else
            cout << "Phuong trinh vo nghiem" << '\n';
    }
}

int main() { 
    int a, b, c;

    while(true) {
        cin >> a >> b >> c;
        solveSecondFunc(a, b, c);
        cout << "===============================" << '\n';
        if(a == 0 && b == 0 && c == 0) break; 
    }
}