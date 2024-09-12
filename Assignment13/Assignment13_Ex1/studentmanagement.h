#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H

#include <student.h>
#include <vector>
struct Node
{
    Student student;
    Node* next;
    Node* prev;
};

class StudentManagement
{
private:
    Node* Head;
    Node* Tail;
public:
    StudentManagement();
    ~StudentManagement();
    void insertAfter(const Student& student);
    void insertByID(const std::string& studentID, const Student& student);
    Student* searchByID(const std::string& studentID);
    std::vector<Student*> searchByName(const std::string& name);
    void display();
    void deleteByID(const std::string& studentID);
    void input();
};

#endif // STUDENTMANAGEMENT_H
