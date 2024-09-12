#include <iostream>

using namespace std;

void fibonacci() {
    unsigned long long f1 = 1;
    unsigned long long f2 = 1;
    unsigned long long f3;
    
    cout << f1 << ' ' << f2 << ' ';
    for(int i = 3; i <= 100; i++) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        cout << f3 << ' ';
    }
    cout << '\n';
}
int main() {
    fibonacci();
}