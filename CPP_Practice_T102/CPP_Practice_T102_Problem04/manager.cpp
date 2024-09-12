#include "manager.h"
#include <iostream>
using namespace std;

Manager::Manager(string acc, string name, string depart, string job, string customer)
    : Employees(acc,name,depart,job), m_customer_name{customer}
{
}

void Manager::ShowInformation()
{
    Employees::ShowInformation();
    cout << "Customer's name: " << m_customer_name << endl;
}

void Manager::DisplayDailyWork()
{
    cout << "Working with customer: " << m_customer_name << endl;
}
