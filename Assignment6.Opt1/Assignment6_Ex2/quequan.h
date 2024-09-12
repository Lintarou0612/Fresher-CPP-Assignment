#ifndef QUEQUAN_H
#define QUEQUAN_H

#include <string>
using namespace std;
class quequan
{
private:
    string m_xa;
    string m_huyen;
    string m_tinh;
public:
    void setQueQuan();
    string getQueQuan();

    void setXa();
    string getXa();

    void setHuyen();
    string getHuyen();

    void setTinh();
    string getTinh();

    quequan();
};

#endif // QUEQUAN_H
