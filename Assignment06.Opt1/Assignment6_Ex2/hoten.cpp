#include "hoten.h"
#include <iostream>

hoten::hoten() : m_ho(""), m_tenDem(""), m_ten("")
{
}
void hoten::setHoVaTen()
{
    cin >> m_ho;
    getline(cin,m_tenDem);
    cin >> m_ten;
}
string hoten::getHoVaTen()
{
    return (m_ho + " " + m_tenDem + " " + m_ten);
}
void hoten::setHo()
{
    cin >> m_ho;
}
string hoten::getHo()
{
    return m_ho;
}

void hoten::setTenDem()
{
    getline(cin,m_tenDem);
}
string hoten::getTenDem()
{
    return m_tenDem;
}

void hoten::setTen()
{
    cin >> m_ten;
}
string hoten::getTen()
{
    return m_ten;
}
