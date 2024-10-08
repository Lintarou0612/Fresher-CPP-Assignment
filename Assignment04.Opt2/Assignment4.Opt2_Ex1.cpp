#include <iostream>

using namespace std;

unsigned int sumDigit(unsigned int n);

int main() { 
    unsigned int n;
    cin >> n;

    cout << sumDigit(n) << '\n';
}

unsigned int sumDigit(unsigned int n) {
    unsigned int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}