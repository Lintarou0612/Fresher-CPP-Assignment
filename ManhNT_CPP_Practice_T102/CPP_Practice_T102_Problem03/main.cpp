#include <iostream>
#include <cmath>

using namespace std;

bool friendNumber(int a, int b)
{
    int sumA = 0;
    int sumB = 0;
    for(int i = 1; i < a; i++)
    {
        if(a % i == 0) //check divisors
        {
            sumA += i;
        }
    }
    for(int i = 1; i < b; i++)
    {
        if(b % i == 0)
        {
            sumB += i;
        }
    }
    if(sumA == b && sumB == a)
        return true;
    return false;
}
int main()
{
    int a, b;
    cin >> a >> b;
    if(a < 1 || b < 1 || a > 10000 || b > 10000)
        cout << "Invalid numbers!" << endl;
    else
    {
        if(friendNumber(a,b))
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
