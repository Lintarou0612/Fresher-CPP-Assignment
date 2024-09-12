#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "employees.h"

class Developer : public Employees
{
    std::string m_project_name;
public:
    Developer(std::string,std::string,std::string,std::string,std::string);
    void ShowInformation();
    std::string ProjectName();
    void DisplayDailyWork();
};

#endif // DEVELOPER_H
