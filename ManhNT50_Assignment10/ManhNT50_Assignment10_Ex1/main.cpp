#include <iostream>
#include "town.h"

using namespace std;

int main()
{
    vector<Town> towns;
    int choice {};
    int numberHousehold {};
    int addressHousehold {};
    int num_of_members {};
    int searchChoice {};
    string search_name{};
    int search_address{};
    do
    {
        cout << "==============================================" << endl;
        cout << "Enter number from (0->3) to choose!" <<endl;
        cout << "1. Enter the information of households in town." << endl;
        cout << "2. Search information of household." << endl;
        cout << "3. Display all information of household." << endl;
        cout << "0. Exit" << endl;
        cout << "==============================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
        case 1:
            cout << "Enter the number of households:" << endl;
            cin >> numberHousehold;
            for(int i = 0; i < numberHousehold; i++)
            {
                cout << "Enter the address of household " << i + 1  << " (number)" << endl;
                cin >> addressHousehold;
                cout << "Enter the number of members of household " << i + 1 << endl;
                cin >> num_of_members;

                Town town(addressHousehold, num_of_members);
                town.InputHousehold();
                towns.push_back(town);
            }

            break;
        case 2:
            cout << "1.Search by name of family members" << '\n';
            cout << "2.Search by address of household" << '\n';
            cout << "Enter your choice: ";
            cin >> searchChoice;
            if(searchChoice == 1)
            {
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, search_name);
                int check_mem = 0;
                for(size_t i = 0; i < towns.size(); i++)
                {
                    if(towns.at(i).SearchByName(search_name))
                    {
                        towns.at(i).PrintHousehold();
                        check_mem++;
                        break;
                    }
                }
                if(check_mem == 0)
                    cout << "Cannot find relevant household with this address!" << endl;
            }
            else if(searchChoice == 2)
            {
                cout << "Enter address: ";
                cin >> search_address;
                int check_add = 0;
                for(size_t i = 0; i < towns.size(); i++)
                {
                    if(towns.at(i).SearchByAddress(search_address))
                    {
                        towns.at(i).PrintHousehold();
                        check_add++;
                        break;
                    }
                }
                if(check_add == 0)
                    cout << "Cannot find relevant household with this address!" << endl;
            }
            else
                cout << "Invalid choice" << endl;
            break;
        case 3:
            for(size_t i = 0; i < towns.size(); i++)
            {
                cout << "The information of household " << i + 1 << '\n';
                towns.at(i).PrintHousehold();
            }
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    }
    while(choice != 0);
    return 0;
}
