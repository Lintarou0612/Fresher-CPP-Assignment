#include <iostream>
#include <queue.h>
#include <stack.h>
#include <string>

using namespace std;

int main()
{
    //Test for stack<int>
    Stack<int> num_list;
    int n;
    int number_of_num {};
    cout << "Enter number of number list: ";
    cin >> number_of_num;
    cout << "Enter numbers in list: " << endl;
    for(int i = 0; i < number_of_num; i++)
    {
        cin >> n;
        num_list.push(n);
    }
    cout << "=========================" << endl;
    while(!num_list.isEmpty())
    {
        int num = num_list.pop();
        cout << num << endl;
    }

//    Queue<int> num_list;
//    int n;
//    int number_of_num {};
//    cout << "Enter number of number list: ";
//    cin >> number_of_num;
//    cout << "Enter numbers in list: " << endl;
//    for(int i = 0; i < number_of_num; i++)
//    {
//        cin >> n;
//        num_list.Enqueue(n);
//    }
//    cout << "=========================" << endl;
//    while(!num_list.isEmpty())
//    {
//        int num = num_list.Dequeue();
//        cout << num << endl;
//    }
    // test for queue<string>
//    Queue<string> student_list;
//    string input;
//    int number_student {};
//    string getStr;
//    cout << "Enter the number of students: ";
//    cin >> number_student;
//    cout << "Enter full name of students: " << endl;
//    cin.ignore();
//    for(int i = 0; i < number_student; i++)
//    {
//        getline(cin, input);
//        student_list.Enqueue(input);
//    }
//    // lay ra 5 sinh vien o dau
//    int count = 0;
//    while(!student_list.isEmpty() && count < 5)
//    {
//        getStr = student_list.Dequeue();
//        //cout << getStr << endl;
//        count++;
//    }
//    // nhap them 10 sinh vien
//    cout << "Enter the number of students: ";
//    cin >> number_student;
//    cout << "Enter full name of students: " << endl;
//    cin.ignore();
//    for(int i = 0; i < number_student; i++)
//    {
//        getline(cin, input);
//        student_list.Enqueue(input);
//    }
//    //in ra 15 sinh vien
//    cout << "====================================" << endl;
//    while(!student_list.isEmpty())
//    {
//        getStr = student_list.Dequeue();
//        cout << getStr << endl;
//    }
    return 0;
}
