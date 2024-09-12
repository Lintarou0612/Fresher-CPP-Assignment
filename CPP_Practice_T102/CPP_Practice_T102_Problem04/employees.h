#ifndef EMPLOYEES_H
#define EMPLOYEES_H
#include <string>

class Employees
{
protected:
    std::string m_acount;
    std::string m_name;
    std::string m_department;
    std::string m_job_title;
public:
    Employees();
    Employees(std::string,std::string,std::string,std::string);
    void ShowInformation();
    virtual void DisplayDailyWork() = 0;
};

#endif // EMPLOYEES_H
