#include "employees.h"
#include <iostream>
using namespace std;

Employees::Employees(string acc, string name, string depart, string job)
    : m_acount{acc}, m_name{name}, m_department{depart}, m_job_title{job}
{   }

void Employees::ShowInformation()
{
    cout << "Account: " << m_acount << '\n';
    cout << "Name: " << m_name << '\n';
    cout << "Department: " << m_department << '\n';
    cout << "Job Title: " << m_job_title << '\n';
}
