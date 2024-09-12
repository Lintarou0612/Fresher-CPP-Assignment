#include "human.h"
using namespace std;

int Human::count = 1;
std::string Human::name() const
{
    return m_name;
}

void Human::setName(const std::string &name)
{
    m_name = name;
}

Human::Human()
{

}

ostream &operator<<(ostream &out, const Human &human)
{
    out << human.m_name << " / " << human.m_ID <<  " / " << human.m_age << " / "
        << human.m_birthYear << " / " << human.m_occupation << '\n';
    return out;
}

std::istream &operator>>(std::istream &in, Human &human)
{
    //in.clear();

    cout << "Enter ID number of family member " << Human::count << ": ";
    //in.ignore();
    in >> human.m_ID;
    cout << "Enter full name of family member " << Human::count << ": ";
    in.ignore();
    getline(in,human.m_name);
    cout << "Enter age of family member " << Human::count << ": ";
    in >> human.m_age;
    cout << "Enter year of birth of family member " << Human::count << ": ";
    in >> human.m_birthYear;
    cout << "Enter occupation of family member " << Human::count++ << ": ";
    in.ignore();
    getline(in, human.m_occupation);

    return in;
}
