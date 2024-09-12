#include <iostream>

using namespace std;

void swap(int* &evenNumber, int* &oddNumber) {
    int *temp = evenNumber;
    evenNumber = oddNumber;
    oddNumber = temp;
}
int main() {
    int evenNumber = 2;
    int oddNumber = 3;
    int *ptrE = &evenNumber;
    int *ptrO = &oddNumber;

    printf("evenNumber: %d, oddNumber : %d\n", *ptrE, *ptrO);

    swap(ptrE, ptrO);

    printf("evenNumber: %d, oddNumber : %d\n", *ptrE, *ptrO);
    return 0;
}