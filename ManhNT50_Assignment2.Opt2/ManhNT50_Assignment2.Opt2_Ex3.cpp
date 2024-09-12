#include <iostream>
#include <string>
using namespace std;

struct Students {
    string Account;
    string Name;
    string StudentID;
};

void input(Students *student, int StudentNum) {
    int j = 1;
    for(int i = 0; i < StudentNum; i++, j++) {
        cout << "Enter Account for student " << j << ": ";
        cin >> student[i].Account;
        cout << "Enter Full Name for student " << j << ": ";
        cin.ignore();
        getline(cin, student[i].Name);
        cout << "Enter ID for student " << j << ": ";
        cin >> student[i].StudentID;
    }
}
void output(Students *student, int StudentNum) {
    int j = 1;
    for(int i = 0; i < StudentNum; i++, j++) {
        cout << "Student " << j << ": " << '\n';
        cout << "Account: " << student[i].Account << '\n';
        cout << "Full name: " << student[i].Name << '\n';
        cout << "Student ID: " << student[i].StudentID << '\n';
    }
}
void searchByAccount(Students *student, int StudentNum, string searchStu) {
    for(int i = 0; i < StudentNum; i++) {
        if(student[i].Account == searchStu) {
            cout << "Information of this student: " << '\n';
            cout << "Account: " << student[i].Account << '\n';
            cout << "Full name: " << student[i].Name << '\n';
            cout << "Student ID: " << student[i].StudentID << '\n';
            break;
        }
        else {
            cout << "Cannot find this student in database." << '\n';
        }
    } 
}
void deleteStudent(Students *student, int &StudentNum, string StuID) {
    int find;
    for(int i = 0; i < StudentNum; i++) {
        if(student[i].StudentID == StuID) {
            find = i;
            break;
        }
    }
    for(int i = find; i < StudentNum-1; i++) {
        student[i].Account = student[i+1].Account;
        student[i].Name = student[i+1].Name;
        student[i].StudentID = student[i+1].StudentID;
    }
    StudentNum--;
    output(student, StudentNum);
}
int main() {
    int StudentNum = 2;
    Students *student= new Students[StudentNum];
    
    int choose;
    string searchStu;
    char exit;
    string stuID;
    do {
        cout << "================Student Management===============" << '\n';
        cout << "Choose your option below: " << '\n';
        cout << "1. Import data of students" << '\n';
        cout << "2. Export data of students" << '\n';
        cout << "3. Search By Account" << '\n';
        cout << "4. Delete a student based on Student ID" << '\n';
        cout << "0. Exit" << '\n';
        cin >> choose;
        switch (choose)
        {
        case 1:
            input(student, 2);
            break;
        case 2:
            output(student, 2);
            break;
        case 3:
            cout << "Enter the account you need to search: ";
            cin >> searchStu;
            searchByAccount(student, StudentNum, searchStu);
            break;
        case 4:
            cout << "Enter student ID: ";
            cin >> stuID;
            cout << "List of remaining student: " << '\n';
            deleteStudent(student, StudentNum, stuID);
            break;
        case 0:
            exit = 'y';
            break;
        default:
            cout << "Please enter choice from (0->4) like instruction" << '\n';
            break;
        }

    } while(exit!='y');
    delete[]student;
}