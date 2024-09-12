#include "student.h"
using namespace std;
std::string Student::getID() const
{
    return m_ID;
}

void Student::setID(const std::string &ID)
{
    m_ID = ID;
}

std::string Student::getname() const
{
    return m_name;
}

void Student::setName(const std::string &name)
{
    m_name = name;
}

int Student::getage() const
{
    return m_age;
}

void Student::setAge(int age)
{
    m_age = age;
}

Student::Student()
{

}

Student::Student(std::string id, std::string name, int age) : m_ID(id), m_name(name), m_age(age)
{

}

ostream& operator<<(ostream& os, const Student& student) {
        os << "ID: " << student.m_ID << " / Name: " << student.m_name << " / Age: " << student.m_age;
        return os;
    }
