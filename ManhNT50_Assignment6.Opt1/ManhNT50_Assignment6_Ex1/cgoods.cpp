#include "cgoods.h"

int CGoods::getNumOfGoods()
{
    return m_nNumberOfGood;
}
int CGoods::getPayment()
{
    return m_fValue;
}
void CGoods::input()
{
    cout << "Input code : ";
    cin >> m_sCode;
    cout << "Input name : ";
    cin.ignore();
    getline(cin,m_sName);
    cout << "Input unit to calculate (USD, VND,...): ";
    cin >> m_sUnit;
    cout << "Input unit price : ";
    cin >> m_fUPrice;
    cout << "Input number of good : ";
    cin >> m_nNumberOfGood;
}
void CGoods::output()
{
    cout << "Code of goods: " << m_sCode << '\n';
    cout << "Name of goods: " << m_sName << '\n';
    cout << "Unit calculation (USD, VND,...): " << m_sUnit << '\n';
    cout << "Unit price of goods: " << m_fUPrice << '\n';
    cout << "Number of goods: " << m_nNumberOfGood << '\n';
}
void CGoods::payment()
{
    m_fValue = m_fUPrice * m_nNumberOfGood;
    cout << "Goods cost: " << m_fValue << '\n';
}

CGoods::CGoods(string sCode, string sName, string sUnit, float fUPrice, float fValue, int nNumberOfGood)
    : m_sCode(sCode), m_sName(sName), m_sUnit(sUnit), m_fUPrice(fUPrice), m_fValue(fValue), m_nNumberOfGood(nNumberOfGood)
{}
CGoods::CGoods()
{
    m_sCode = "";
    m_sName = "";
    m_sUnit = "";
    m_fUPrice = 0.0;
    m_fValue = 0.0;
    m_nNumberOfGood = 0;
}
