#include <iostream>

using namespace std;

void ExtendArray(int *&arr, int &maxSize) {
    int newSize = maxSize * 2;
    int *q = new int[newSize];

    for(int i = 0; i < maxSize; i++) {
        q[i] = arr[i];
    }

    delete[]arr;
    arr = q;
    maxSize = newSize;
}

void inputArrayExtend(int *&arr, int &maxSize, int &n) {
    char c;
    while(cin >> c && c != '@') {
        int input = c - '0';
        if(input >= 0 && input <= 9) {
            if(n >= maxSize) {
                ExtendArray(arr, maxSize);
            }
            arr[n++] = input;
        } else {
            cout << "Error. Only integer >= 0 and < 10" << '\n';
        }
    }
}

void print(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}
int main() {
    int maxSize = 2;
    int n = 0;
    int *p = new int[maxSize];

    inputArrayExtend(p, maxSize, n);
    print(p, n);

    delete[] p;
}