#include <iostream>

using namespace std;

int main() {
    int num;
    int den;
    int quotient;
    int remainder;

    cin >> num >> den;

    cout << "quotient = " << num / den << '\n';
    cout << "remainder = " << num % den << '\n';
}