#include <iostream>
#include <vector>

using namespace std;

int SearchMinNonNeg(vector<int> arr);

int main()
{
    int num {};
    int n {};
    vector<int> arr;
    cout << "Enter the number of integers in list: ";
    cin >> num;
    if(num == 0)
    {
        cout << "Please entering at least 1 integer!" << endl;
        return 1;
    }
    cout << "Enter the numbers: " << endl;
    for(int i = 0; i < num; i++)
    {
        cin >> n;
        arr.push_back(n);
    }
    cout << "The minimum non-negative integer is not in the list is: " << SearchMinNonNeg(arr) << endl;
    return 0;
}

int SearchMinNonNeg(vector<int> arr)
{
    int size = arr.size();
    for(int i = 0; i < size; i++)
    {
        if(arr.at(i) >= 0 && arr.at(i) < size && arr.at(i) != arr.at(arr.at(i)))
        {
            swap(arr.at(i), arr.at(arr.at(i)));
        }
    }
    for(int i = 0; i < size; i++)
    {
        if(arr.at(i) != i)
            return i;
    }
    return size;
}
