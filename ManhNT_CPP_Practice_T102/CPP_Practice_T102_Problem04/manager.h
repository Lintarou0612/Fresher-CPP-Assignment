#ifndef MANAGER_H
#define MANAGER_H
#include <string>
#include "employees.h"

class Manager : public Employees
{
    std::string m_customer_name;
public:
    Manager(std::string,std::string,std::string,std::string,std::string);
    void ShowInformation();
    void DisplayDailyWork();
};

#endif // MANAGER_H
