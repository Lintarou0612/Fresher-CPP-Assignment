#include "quequan.h"
#include <iostream>

quequan::quequan() : m_xa(""), m_huyen(""), m_tinh("")
{

}
void quequan::setQueQuan() {
    cin >> m_xa >> m_huyen >> m_tinh;
}
string quequan::getQueQuan()
{
    return (m_xa + " " + m_huyen + " " + m_tinh);
}
void quequan::setXa()
{
    getline(cin,m_xa);
}
string quequan::getXa()
{
    return m_xa;
}

void quequan::setHuyen()
{
    getline(cin,m_huyen);
}
string quequan::getHuyen()
{
    return m_huyen;
}

void quequan::setTinh()
{
    getline(cin,m_tinh);
}
string quequan::getTinh()
{
    return m_tinh;
}

