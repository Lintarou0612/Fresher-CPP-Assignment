#include <iostream>
#include <queue.h>
#include <string>

using namespace std;

int main()
{
    Queue student_list;
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
        student_list.Enqueue(input);
    }
    // lay ra 5 sinh vien o dau
    int count = 0;
    while(!student_list.isEmpty() && count < 5)
    {
        getStr = student_list.Dequeue();
        //cout << getStr << endl;
        count++;
    }
    // nhap them 10 sinh vien
    cout << "Enter the number of students: ";
    cin >> number_student;
    cout << "Enter full name of students: " << endl;
    cin.ignore();
    for(int i = 0; i < number_student; i++)
    {
        getline(cin, input);
        student_list.Enqueue(input);
    }
    //in ra 15 sinh vien
    cout << "====================================" << endl;
    while(!student_list.isEmpty())
    {
        getStr = student_list.Dequeue();
        cout << getStr << endl;
    }
    return 0;
}
