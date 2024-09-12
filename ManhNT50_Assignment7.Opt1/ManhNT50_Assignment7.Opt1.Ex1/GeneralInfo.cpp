#include "GeneralInfo.h"
#include <iostream>
using namespace std;

GeneralInfo::GeneralInfo()
{

}

void GeneralInfo::Display(Customer& customer, Receipt& receipt)
{
    customer.DisplayHouseholdInfo();

    cout << "Previous electric index: " << receipt.m_OldIndex << endl;
    cout << "Current electric index: " << receipt.m_NewIndex << endl;
    cout << "The money needed to pay: " << receipt.CalPayment() << '\n';
}

void GeneralInfo::Input(Customer& customer, Receipt& receipt)
{
    customer.InputHouseholdInfo();

    cout << "Enter previous index of electric meter: ";
    cin >> receipt.m_OldIndex;
    cout << "Enter current index of electric meter: ";
    cin >> receipt.m_NewIndex;
}
