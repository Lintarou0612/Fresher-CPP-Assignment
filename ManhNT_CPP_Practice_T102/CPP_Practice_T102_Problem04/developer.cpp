#include "developer.h"
#include <iostream>

using namespace std;
Developer::Developer(string acc, string name, string depart, string job, string proj)
    : Employees(acc,name,depart,job)
{
    m_project_name = proj;
}

void Developer::ShowInformation()
{
    Employees::ShowInformation();
    cout << "Project name: " << m_project_name << endl;
}

void Developer::DisplayDailyWork()
{
    cout << "Coding in project: " << m_project_name << endl;
}
