#include <iostream>

using namespace std;

bool isEven(int n) {
    if(n % 2 == 0)
        return true;
    return false;
}
int main() {
    int n;
    cin >> n;

    if(isEven(n))
        cout << n << " is even number." << '\n';
    else
        cout << n << " is odd number." << '\n';
}