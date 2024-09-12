#include "customer.h"
#include <iostream>
using namespace std;

int Customer::m_NumOfHomeCount = 0; //initialize for static variable

//Constructor
Customer::Customer() : m_Name(""), m_Address(""), m_ElecMeterID("")
{

}

//Print the household's information
void Customer::DisplayHouseholdInfo()
{
    cout << "Household No." << ++m_NumOfHomeCount << ":" << '\n';
    cout << "Name: " << m_Name << '\n';
    cout << "Address: " << m_Address << '\n';
    cout << "Meter ID: " << m_ElecMeterID << '\n';
}

//Enter the information of households
void Customer::InputHouseholdInfo()
{
    cout << "Enter household\'s name: ";
    //cin.ignore();
    getline(cin, m_Name, '\n');
    cout << "Enter household\'s address: ";
    cin.ignore();
    getline(cin, m_Address, '\n');
    cout << "Enter household\'s electric meter ID: ";
    cin.ignore();
    getline(cin, m_ElecMeterID, '\n');
}
