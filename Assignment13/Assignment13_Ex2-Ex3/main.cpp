#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

void bubbleSort(vector<Student>& students) {
    bool swapped = false;
    for (int i = 0; i < students.size() - 1; ++i)
    {
        swapped = false;
        for(int j = 0; j < students.size() - i - 1; ++j)
        {
            if (students[i].getID() > students[i + 1].getID())
            {
                swap(students[i], students[i + 1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
}
int binarySearch(const string& studentID, vector<Student>& students)
{
    int low = 0;
    int high = students.size() - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(students[mid].getID() == studentID)
            return mid;
        else if(students[mid].getID() < studentID)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    vector<Student> students = {
        Student("10934323", "Nguyen Tien Manh", 20),
        Student("00123434", "Tran Thi Van", 23),
        Student("09786765", "Pham Khanh Linh", 18),
        Student("32786765", "Pham Anh Quan", 13),
    };
    bubbleSort(students);
    cout << "The list of students after sorted: " << endl;
    for(const Student& stu : students)
    {
        cout << stu << endl;
    }

    string searchItem {};
    cout << "Enter the student ID you want to search: ";
    cin >> searchItem;

    if(binarySearch(searchItem, students) != -1)
    {
        cout << students[binarySearch(searchItem, students)] << endl;
    }
    else
        cout << "Cannot find student info with this ID" << endl;
    return 0;
}
