#ifndef CGOODS_H
#define CGOODS_H

#include <iostream>
#include <string>
using namespace std;
class CGoods
{
private:
    string m_sCode;
    string m_sName;
    string m_sUnit;
    float m_fUPrice, m_fValue;
    int m_nNumberOfGood;
public:
    int getNumOfGoods();
    int getPayment();
    void input();
    void output();
    void payment();
    CGoods(string, string, string, float, float, int);
    CGoods();
};

#endif // CGOODS_H
