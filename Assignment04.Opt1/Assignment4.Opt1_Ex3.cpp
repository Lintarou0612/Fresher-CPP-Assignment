#include <iostream>
#include <iomanip>

using namespace std;

int Add(int a, int b) {
    return a + b;
}
int Sub(int a, int b) {
    return a - b;
}
long long Multi(int a, int b) {
    long long res = a * b;
    return res;
}
int Mod(int a, int b) {
    return a % b;
}
double Div(int a, int b) {
    return 1.0 * a / b;
}
int main() { 
    int a, b;
    cin >> a >> b;

    cout << "Add(" << a << ", " << b << ") = " << Add(a, b) << '\n';
    cout << "Sub(" << a << ", " << b << ") = " << Sub(a, b) << '\n';
    cout << "Multi(" << a << ", " << b << ") = " << Multi(a, b) << '\n';
    cout << "Mod(" << a << ", " << b << ") = " << Mod(a, b) << '\n';
    cout << "Div(" << a << ", " << b << ") = " << setprecision(7) << Div(a, b) << '\n';
}