#ifndef HUMAN_H
#define HUMAN_H

#include <string>

class Human
{
    std::string m_name;
    int m_birth_year;
    std::string m_citizen_ID;
public:
    Human();
    std::string getName() const;
    void setName(const std::string &name);
    int birth_year() const;
    void setBirth_year(int birth_year);
    std::string citizen_ID() const;
    void setCitizen_ID(const std::string &citizen_ID);
    void inputGuestInfo();
    void displayGuestInfo();
};

#endif // HUMAN_H
