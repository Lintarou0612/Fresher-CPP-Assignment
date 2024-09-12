#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

class Student
{
private:
    std::string m_ID;
    std::string m_name;
    int m_age;
public:
    Student();
    Student(std::string, std::string, int);
    std::string getID() const;
    void setID(const std::string &ID);
    std::string getname() const;
    void setName(const std::string &name);
    int getage() const;
    void setAge(int age);
    friend std::ostream& operator<<(std::ostream& os, const Student& student);
};

#endif // STUDENT_H
