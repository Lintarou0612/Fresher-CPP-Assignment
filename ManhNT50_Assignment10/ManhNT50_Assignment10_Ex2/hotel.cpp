#include "hotel.h"
#include <iostream>
using namespace std;

Hotel::Hotel()
{

}

void Hotel::AddGuest(Human &guest, int rentDay, std::string& typeRoom, double roomPrice)
{

}

void Hotel::InputGuestHotel()
{
    int num {};
    int rentDay{};
    string typeRoom;
    double price{};
    Human guest;
    cout << "Enter the number of guests: " << endl;
    cin >> num;
    cout << endl;
    //cin.ignore();
    for(int i = 0; i < num; i++)
    {
        guest.inputGuestInfo();
        m_guests.push_back(guest);
        cout << "Enter the renting days: ";
        cin >> rentDay;
        m_rent_day.push_back(rentDay);
        cout << "Enter the type of room (single, double, king queen, ...): ";
        cin.ignore();
        getline(cin, typeRoom);
        m_type_room.push_back(typeRoom);
        cout << "Enter the price of room per day: ";
        cin >> price;
        m_room_price.push_back(price);
        cout << endl;
    }
}

void Hotel::DisplayGuestHotel()
{
    if(m_guests.empty())
    {
        cout << "Currently hotel do not have any guests!" <<endl;
        return;
    }
    cout << "List of guests:" << endl;
    for(int i = 0; i < m_guests.size(); i++)
    {
        cout << "Guest " << i+1 << ": " << endl;
        cout << "Full name: " << m_guests.at(i).getName() << endl;
        cout << "Birth of year: " << m_guests.at(i).birth_year() << endl;
        cout << "Citizen ID: " << m_guests.at(i).citizen_ID() << endl;
        cout << "Renting days: " << m_rent_day.at(i) << endl;
        cout << "Type room: " << m_type_room.at(i) << endl;
        cout << "Price/Day: " << m_room_price.at(i) << endl;
        cout << endl;
    }
}
string toLower(string s)
{
    string result = s;
    for(int i = 0; i < s.length(); i++)
    {
        result[i] = tolower(s[i]);
    }
    return result;
}
void Hotel::SearchGuestByName(const string& name)
{
    bool found = false;

    for(int i = 0; i < m_guests.size(); i++)
    {
        if(toLower(m_guests.at(i).getName()) == toLower(name))
        {
            cout << "Guest " << i+1 << ": " << endl;
            cout << "Full name: " << m_guests.at(i).getName() << endl;
            cout << "Birth of year: " << m_guests.at(i).birth_year() << endl;
            cout << "Citizen ID: " << m_guests.at(i).citizen_ID() << endl;
            cout << "Renting days: " << m_rent_day.at(i) << endl;
            cout << "Type room: " << m_type_room.at(i) << endl;
            cout << "Price/Day: " << m_room_price.at(i) << endl;
            found = true;
            break;
        }
    }
    if(!found)
        cout << "Cannot find the info of guest with name: " << name << endl;
}

void Hotel::Checkout(const string& name)
{
    bool found = false;
    double totalPayment{};
    for(int i = 0; i < m_guests.size(); i++)
    {
        if(toLower(m_guests.at(i).getName()) == toLower(name))
        {
            totalPayment = m_rent_day.at(i) * m_room_price.at(i);
            cout << "Invoice of guest name: " << name << endl;
            cout << "Full name: " << m_guests.at(i).getName() << endl;
            cout << "Birth of year: " << m_guests.at(i).birth_year() << endl;
            cout << "Citizen ID: " << m_guests.at(i).citizen_ID() << endl;
            cout << "Renting days: " << m_rent_day.at(i) << endl;
            cout << "Type room: " << m_type_room.at(i) << endl;
            cout << "Price/Day: " << m_room_price.at(i) << endl;
            cout << "Total price: " << totalPayment << endl;
            cout << "Payment successful!" << endl;
            found = true;
            break;
        }
    }
    if(!found)
        cout << "Cannot find the info of guest with name: " << name << endl;
}
