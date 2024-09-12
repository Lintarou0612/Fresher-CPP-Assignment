#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer
{
private:
    string m_Name;
    string m_Address;
    string m_ElecMeterID;
    static int m_NumOfHomeCount;
public:
    Customer();
    void DisplayHouseholdInfo();
    void InputHouseholdInfo();
    friend class GeneralInfo;
};

#endif // CUSTOMER_H
