#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <vector>
#include "human.h"

class Hotel
{
private:
    std::vector<Human> m_guests;
    std::vector<int> m_rent_day;
    std::vector<std::string> m_type_room;
    std::vector<double> m_room_price;
public:
    Hotel();
    void AddGuest(Human& guest, int rentDay, std::string& typeRoom, double roomPrice);
    void InputGuestHotel();
    void DisplayGuestHotel();
    void SearchGuestByName(const std::string&);
    void Checkout(const std::string& name);
};

#endif // HOTEL_H
