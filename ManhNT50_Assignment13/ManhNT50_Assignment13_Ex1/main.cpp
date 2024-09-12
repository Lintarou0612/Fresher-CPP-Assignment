#include <iostream>
#include "studentmanagement.h"

using namespace std;
bool exitMenu {false};
void mainMenu(StudentManagement& list)
{
    Student stu;
    int choice;
    while (!exitMenu)
    {
        system("clear");
        cout << "\t    ========== STUDENT MANAGEMENT ===========\n\n\n";
        cout << "1. Add Student's info" << endl
             << "2. Search Student's info" << endl
             << "3. Delete Student's info" << endl
             << "4. Display Student's info" << endl
             << "5. Exit" << endl;
        cout << "Enter your choice!" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("clear");
            cout << "Enter the number of student's infomation you want to add: ";
            int n; cin >> n; cin.ignore();
            cout << "Enter student's info" <<endl;
            for (int i = 0; i < n; i++)
            {
                cout << "Student " << i + 1 << endl;
                list.input();
            }
            cout << "Press <ENTER> to close this window..." << endl;
            getchar();
            break;
        case 2:
            while (!exitMenu)
            {
                system("clear");
                cout << "1. Search student by ID" << endl
                     << "2. Search student by name" << endl
                     << "3. Exit" << endl;
                char choice; cin >> choice; cin.ignore();
                switch (choice)
                {
                case '1':
                {
                    system("clear");
                    cout << "Enter student ID : ";
                    string studentID; getline(cin, studentID);
                    Student *foundStudent = list.searchByID(studentID);
                    if (foundStudent) {
                        cout << "Found student: " << *foundStudent << endl;
                    } else {
                        cout << "Cannot find student with ID " << studentID << endl;
                    }
                    cout << "Press <ENTER> to close this window..." << endl;
                    getchar();
                }
                    break;
                case '2':
                {
                    system("clear");
                    cout << "Enter student's name: ";
                    string name; getline(cin, name);
                    vector<Student*> searchResults = list.searchByName(name);
                    if (searchResults.size() > 0)
                    {
                        cout << "List of student with name \"" << name << "\":" << endl;
                        for (Student* student : searchResults)
                            cout << *student << endl;
                    } else
                    {
                        cout << "Cannot find student with name \"" << name << "\"" << endl;
                    }
                    cout << "Press <ENTER> to close this window..." << endl;
                    getchar();
                }
                    break;
                default:
                    exitMenu = true;
                    break;
                }
            }
            exitMenu = false;
            break;
        case 3:
            while (!exitMenu)
            {
                system("clear");
                cout << "1. Delete student's info by ID" << endl
                     << "2. Exit" << endl;
                char choice; cin >> choice; cin.ignore();
                switch (choice) {
                case '1':
                {
                    system("clear");
                    cout << "Enter student ID: ";
                    string studentID; getline(cin, studentID); //cin.ignore();
                    list.deleteByID(studentID);
                    cout << "Press <ENTER> to close this window..." << endl;
                    getchar();
                    break;
                }
                default:
                    exitMenu = true;
                    break;
                }
            }
            exitMenu = false;
            break;
        case 4:
            system("clear");

            cout << "\t =========== Student list ============\n\n\n";
            list.display();
            cout << "Press <ENTER> to close this window..." << endl;
            cin.ignore();
            getchar();
            exitMenu = false;
            break;
        default:
            exitMenu = true;
            break;
        }
    }
}
int main()
{
    StudentManagement studentList;

    studentList.insertAfter(Student("12345342", "Nguyen Tien Manh", 23));
    studentList.insertAfter(Student("12346000", "Le Viet Dung", 22));
    studentList.insertAfter(Student("12789654", "Nguyen Trung Kien", 20));
    studentList.insertAfter(Student("26546546", "Le Anh Quan", 23));
    studentList.insertAfter(Student("00342123", "Dao Trung Kien", 23));
    studentList.insertAfter(Student("45454232", "Pham Khanh Linh", 26));
    studentList.insertAfter(Student("09067576", "Nguyen Tien Dung", 28));
    //studentList.display();
    mainMenu(studentList);
    return 0;
}
