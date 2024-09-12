#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

typedef long long ll;

// Mutex for thread-safe access to the primes vector
std::mutex mtx;
std::vector<ll> primes;

// Function to check prime number
bool isPrime(ll x)
{
    if(x < 2) return false;
    for(ll i = 2; i * i < x; ++i)
    {
        if(x % 2 == 0)
            return false;
    }
    return true;
}
// Function for each thread to find primes in a given range
void findPrimes(ll start, ll end) {
    for (ll i = start; i <= end; ++i) {
        if (isPrime(i)) {
            std::lock_guard<std::mutex> lock(mtx);
            primes.push_back(i);
        }
    }
}
int main()
{
    ll a;
    ll b;
    int n;

    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << "Enter number of threads: ";
    cin >> n;

    if (a > b || n <= 0) {
        std::cerr << "Invalid input!" << std::endl;
        return 1;
    }

    auto startTime = chrono::high_resolution_clock::now();
    vector<thread> threads;
    int range = (b - a + 1) / n;
    int remain = (b - a + 1) % n;
    for (int i = 0; i < n; ++i) {
        int start = a + i * range;
        int end = start + range - 1;
        if (i == n - 1) {
            end += remain; // Add the remainder to the last thread's range
        }
        threads.emplace_back(findPrimes, start, end);
    }
    // Join threads
    for (auto& thread : threads) {
        thread.join();
    }

    auto end_time = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end_time - startTime;

    cout << "Primes in range (" << a << " , " << b << ") are: ";
    for (ll prime : primes) {
        std::cout << prime << " ";
    }
    cout << endl;

    cout << "Time taken: " << duration.count() << " seconds" << endl;
    return 0;
}
