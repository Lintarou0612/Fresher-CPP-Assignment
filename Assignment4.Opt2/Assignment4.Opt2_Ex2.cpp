#include <iostream>
#include <cmath>
using namespace std;

unsigned int reverse(unsigned int n);

int main() { 
    unsigned int n;
    cin >> n;

    cout << reverse(n) << '\n';
}

unsigned int reverse(unsigned int n) {
    int count = 0;
    int digit;
    unsigned int rev = 0;
    unsigned int *arr = new unsigned int[count];
    while(n != 0) {
        digit = n % 10;
        n /= 10;
        *(arr + count++) = digit;
    }
    for(int i = 0; i < count; i++) {
        rev +=  *(arr + i) * pow(10,(count - 1 - i));
    }
    return rev;
}