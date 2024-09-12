#include "human.h"
#include <iostream>
using namespace std;

std::string Human::getName() const
{
    return m_name;
}

void Human::setName(const std::string &name)
{
    m_name = name;
}

int Human::birth_year() const
{
    return m_birth_year;
}

void Human::setBirth_year(int birth_year)
{
    m_birth_year = birth_year;
}

std::string Human::citizen_ID() const
{
    return m_citizen_ID;
}

void Human::setCitizen_ID(const std::string &citizen_ID)
{
    m_citizen_ID = citizen_ID;
}

void Human::inputGuestInfo()
{
    cout << "Enter the name of guest: ";
    cin.ignore();
    getline(cin, m_name);
    cout << "Enter birth of year: ";
    cin >> m_birth_year;
    cout << "Enter citizen ID: ";
    cin >> m_citizen_ID;
}

void Human::displayGuestInfo()
{
    cout << m_name << " / " << m_birth_year << " / " << m_citizen_ID << endl;
}

Human::Human()
{

}
