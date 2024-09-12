#include <iostream>

using namespace std;
// n >= 1 && n <= 100
void fibonacci(int n) {
    unsigned long long f1 = 1;
    unsigned long long f2 = 1;
    unsigned long long f3;
    
    if(n == 1)
        cout << f1 << '\n';
    if(n == 2) 
        cout << f2 << '\n';
    for(int i = 3; i <= 100; i++) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        if(n == i) {
            cout << i << "-th Fibonacci number is: " << f3 << '\n';
            break;
        }
    }
}
int main() {
    int n;
    cout << "N = ";
    cin >> n;
    fibonacci(n);
}