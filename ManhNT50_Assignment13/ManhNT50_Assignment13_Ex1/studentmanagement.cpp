#include "studentmanagement.h"
#include <string>
using namespace std;

StudentManagement::StudentManagement() : Head(nullptr), Tail(nullptr)
{

}

StudentManagement::~StudentManagement()
{
    Node* current = Head;
    while (current) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}
void StudentManagement::insertAfter(const Student& student)
{
    Node* newNode = new Node{student, nullptr, nullptr};

    if (Head == nullptr) {
        Head = newNode;
        Tail = newNode;
    } else {
        Tail->next = newNode;
        newNode->prev = Tail;
        Tail = newNode;
    }
}
void StudentManagement::insertByID(const std::string& studentID, const Student& student)
{
    Node* newNode = new Node{student, nullptr, nullptr};
    // Them phan tu dau tien
    if(Head == nullptr)
    {
        Head = newNode;
        Tail = newNode;
    }
    else
    {
        Node* current = Head;
        while(current)
        {
            if(current->student.getID() == studentID)
            {
                cout << "Student's ID existed!" << endl;
                return;
            }
            current = current->next;
        }

        Tail->next = newNode;
        newNode->prev = Tail;
        Tail = newNode;
    }
}

Student *StudentManagement::searchByID(const string& studentID)
{
    Node* current = Head;
    while(current)
    {
        if(current->student.getID() == studentID)
            return &current->student;
        current = current->next;
    }
    return nullptr;
}

std::vector<Student *> StudentManagement::searchByName(const string& name)
{
    vector<Student*> results;
    Node* current = Head;
    while (current) {
        if (current->student.getname().find(name) != string::npos) {
            results.push_back(&current->student);
        }
        current = current->next;
    }
    return results;
}

void StudentManagement::display()
{
    Node* current = Head;
    while(current != nullptr)
    {
        cout << current->student << endl;
        current = current->next;
    }
}

void StudentManagement::deleteByID(const string &studentID)
{
    Node* current = Head;
    while(current)
    {
        if(current->student.getID() == studentID)
        {
            if(current == Head)
            {
                Head = current->next;
                if(Head)
                    Head->prev = nullptr;
            }
            else if(current == Tail)
            {
                Tail = current->next;
                if(Tail)
                    Tail->prev = nullptr;
            }
            else
            {
                current->prev->next = current->next;
                current->next->prev = current->prev;
            }
            delete current;
            return;
        }
        current = current->next;
    }
}

void StudentManagement::input()
{
    string studentID;
    int age;
    string fullName;

    cout << "ID: ";
    cin >> studentID;

    cout << "Full Name: ";
    cin.ignore();
    getline(cin, fullName);

    cout << "Age: ";
    cin >> age;

    Student student(studentID, fullName, age);
    insertAfter(student);
}
