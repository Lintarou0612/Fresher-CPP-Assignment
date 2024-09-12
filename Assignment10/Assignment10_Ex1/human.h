#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <iostream>

class Human
{
private:
    std::string m_ID;
    std::string m_name;
    int m_age;
    int m_birthYear;
    std::string m_occupation; //nghe nghiep

public:
    Human();
    friend std::istream &operator>>(std::istream &in, Human &human);
    friend std::ostream &operator<<(std::ostream &out, const Human &human);
    static int count;
    std::string name() const;
    void setName(const std::string &name);
};

#endif // HUMAN_H
