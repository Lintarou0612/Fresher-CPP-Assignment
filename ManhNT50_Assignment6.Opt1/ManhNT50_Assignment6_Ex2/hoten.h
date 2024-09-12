#ifndef HOTEN_H
#define HOTEN_H

#include <string>
using namespace std;

class hoten
{
private:
    string m_ho;
    string m_tenDem;
    string m_ten;
public:
    void setHoVaTen();
    string getHoVaTen();

    void setHo();
    string getHo();

    void setTenDem();
    string getTenDem();

    void setTen();
    string getTen();

    hoten();
};

#endif // HOTEN_H
