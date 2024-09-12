#include <iostream>
// ax + b = 0;
using namespace std;

void solveFirstOrderFunc(int a, int b, double x) {
    if(a == 0) {
        cout << "No root for this equation" << '\n';
    }
    else {
        cout << "x = " << (-1.0 * b) / a << '\n';
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    double x;
    solveFirstOrderFunc(a,b,x);
}