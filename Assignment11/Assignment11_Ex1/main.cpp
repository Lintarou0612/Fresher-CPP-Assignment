#include <iostream>
#include "stack.h"
#include <string>

using namespace std;

int main()
{
    Stack student_list;
    string input;
    int number_student {};
    string getStr;
    cout << "Enter the number of students: ";
    cin >> number_student;
    cout << "Enter full name of students: " << endl;
    cin.ignore();
    for(int i = 0; i < number_student; i++)
    {
        getline(cin, input);
        student_list.push(input);
    }
//    student_list.push("Sinh viên 1");
//    student_list.push("Sinh viên 2");
//    student_list.push("Sinh viên 3");
//    student_list.push("Sinh viên 4");
//    student_list.push("Sinh viên 5");
//    student_list.push("Sinh viên 6");
//    student_list.push("Sinh viên 7");
//    student_list.push("Sinh viên 8");
//    student_list.push("Sinh viên 9");
//    student_list.push("Sinh viên 10");
    cout << "====================================" << endl;
    while(!student_list.isEmpty())
    {
        getStr = student_list.pop();
        cout << getStr << endl;
    }
    return 0;
}
