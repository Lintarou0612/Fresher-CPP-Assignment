#include <iostream>

using namespace std;

bool isPerfect(unsigned long long n) {
    unsigned long long sum = 1;
    for(unsigned long long i = 2; i * i < n; i++) {
        if(n % i == 0) {
            if(i * i != n)
                sum += i + n / i;
            else
                sum += i;
        }
        
    }
    if(sum == n && n != 1) return true;
    return false;
}
int main() { 
    unsigned long long n;
    cin >> n;
    
    if(isPerfect(n)) cout << n << " is a perfect number." << '\n';
    else cout << n << " is not a perfect number." << '\n';
}