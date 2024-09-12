#include <iostream>

using namespace std;

void Input(int *arr, int size) {
    for(int i = 0; i < size; i++) 
        cin >> arr[i];
}

void MergeArray(int *a1, int *a2, int size1, int size2) {
    int *a3 = new int[size1 + size2];
    int i = 0, j = 0, k = 0;

    while(i < size1 && j < size2) {
        if(a1[i] % 2 != 0) {
            a3[k++] = a1[i++];
            if(a2[j] % 2 == 0) {
                a3[k++] = a2[j++];
            }
        }
        else if(a2[j] % 2 != 0) {
            a3[k++] = a2[j++];
            if(a1[i] % 2 == 0) {
                a3[k++] = a1[i++];
            }
        }
    }
    for(; i < size1; i++) a3[k++] = a1[i];
    for(; j < size2; j++) a3[k++] = a2[j];

    for(int index = 0; index < k; index++)  
        cout << a3[index] << ' ';
    cout << '\n';
}

int main() {
    int n, m;
    cin >> n >> m;
    int *arr1 = new int[n];
    int *arr2 = new int[m];
    Input(arr1, n);
    Input(arr2, m);

    MergeArray(arr1, arr2, n, m);

    delete[]arr1;
    delete[]arr2;
}