#include "town.h"
#include "human.h"
#include <cctype>
using namespace std;

Town::Town(int address, int members) : m_num_of_members{members}, m_address_of_household{address}
{

}

void Town::InputHousehold()
{

    cout << "Enter the information of family members:" << endl;
    vector<Human> member;
    Human m;
    //Human* member = new Human[m_num_of_members];
    for(int i = 0; i < m_num_of_members; i++)
    {
        cin >> m;
        m_familyMembers.push_back(m);
    }
    cout << endl;
    Human::count = 1;
}

void Town::PrintHousehold()
{
    cout << "This household has " << m_num_of_members << " members, "
         << "at address " << m_address_of_household << endl;
    for(size_t i = 0; i < m_familyMembers.size(); i++)
    {
        cout << (m_familyMembers.at(i)) << '\n';
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
bool Town::SearchByName(const std::string& str)
{
    for(const Human& member : m_familyMembers)
    {
        if(toLower(member.name()) == toLower(str))
        {
            return true;
        }
    }
    return false;
}

bool Town::SearchByAddress(const int& add)
{
    if(this->m_address_of_household == add)
        return true;
    return false;
}


