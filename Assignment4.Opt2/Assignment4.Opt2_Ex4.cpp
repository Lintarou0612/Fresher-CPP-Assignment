#include <iostream>

using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i < n; i++) {
        if(n % 2 == 0)   
            return false;
    }
    return true;
}
int main() { 
    int n;
    cin >> n;

    if(isPrime)
        cout << n << " is a prime." << '\n';
    else
        cout << n << " is not a prime." << '\n';
}