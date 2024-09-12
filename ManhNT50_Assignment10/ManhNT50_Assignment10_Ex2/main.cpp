#include <iostream>
#include "hotel.h"

using namespace std;

int main()
{
    Hotel hotel;
    int choice {};
    string search_name{};
    do
    {
        cout << "==============================================" << endl;
        cout << "Enter number from (0->4) to choose!" <<endl;
        cout << "1. Enter the information of guest." << endl;
        cout << "2. Display the information of guest." << endl;
        cout << "3. Search information of guest by name." << endl;
        cout << "4. Payment for guest." << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "==============================================" << endl;
        switch(choice)
        {
        case 1:
            hotel.InputGuestHotel();
            break;
        case 2:
            hotel.DisplayGuestHotel();
            break;
        case 3:
            cout << "Enter guest's name: ";
            cin.ignore();
            getline(cin, search_name);
            cout << "------------------------------" << endl;
            hotel.SearchGuestByName(search_name);
            break;
        case 4:
            cout << "Enter guest's name: ";
            cin.ignore();
            getline(cin, search_name);
            cout << "------------------------------" << endl;
            hotel.Checkout(search_name);
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
