#include "diemthi.h"
#include <iostream>
using namespace std;

diemthi::diemthi() : m_toan(0.0), m_ly(0.0), m_hoa(0.0)
{

}

void diemthi::setToan()
{
    cin >> m_toan;
}
double diemthi::getToan()
{
    return m_toan;
}

void diemthi::setHoa()
{
    cin >> m_hoa;
}
double diemthi::getHoa()
{
    return m_hoa;
}

void diemthi::setLy()
{
    cin >> m_ly;
}
double diemthi::getLy()
{
    return m_ly;
}
