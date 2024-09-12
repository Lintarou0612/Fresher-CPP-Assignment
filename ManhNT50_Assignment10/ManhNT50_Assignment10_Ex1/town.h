#ifndef TOWN_H
#define TOWN_H

#include <string>
#include <vector>
#include <iostream>
#include "human.h"

//class Human;
class Town
{
private:
    int m_num_of_members;
    int m_address_of_household;
    std::vector<Human> m_familyMembers;
    static int count;
public:
    Town(int ,int);
    void InputHousehold();
    void PrintHousehold();
    bool SearchByName(const std::string& str);
    bool SearchByAddress(const int& add);
    friend std::istream& operator>>(std::istream& in, Town &town);
};

#endif // TOWN_H
