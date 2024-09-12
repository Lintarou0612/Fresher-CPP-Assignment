#include <iostream>
#include <vector>
#include "GeneralInfo.h"

using namespace std;

int main()
{
    vector<GeneralInfo> ListCustomer;
    vector<Customer> customer;
    Customer c;
    vector<Receipt> receipt;
    Receipt r;
    GeneralInfo listInfo;
    char choice;
    int index = 0;
    do
    {
        cout << "Enter customer " << index + 1 <<'\n';
        listInfo.Input(c, r);
        //cin.ignore();
        customer.push_back(c);
        receipt.push_back(r);
        ListCustomer.push_back(listInfo);
        index++;
        cout << "Do you want to enter more info of customer? (y/n)" << endl;
        cin >> choice;
    }
    while(choice == 'y');

    for(size_t i = 0; i < ListCustomer.size(); i++)
    {
        ListCustomer.at(i).Display(customer.at(i), receipt.at(i));
    }
    return 0;
}

