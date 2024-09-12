#include "newcgoods.h"

using namespace std;

int newCGoods::getNumOfGoods()
{
    return CGoods::getNumOfGoods();
}
void newCGoods::input()
{
    CGoods::input();
    cout << "Input shipping unit price: ";
    cin >> m_fShippingUnitPrice;
}
void newCGoods::output()
{
    CGoods::output();
    cout << "Shipping unit price: " << m_fShippingUnitPrice << '\n';
}
void newCGoods::transportationCosts()
{
    m_fTransCost  = m_fShippingUnitPrice * getNumOfGoods();
}
void newCGoods::payment()
{
    CGoods::payment();
    cout << "Transportation cost: " << m_fTransCost << '\n';
    cout << "Total cost: " << (CGoods::getPayment() + m_fTransCost) << '\n';
}
newCGoods::newCGoods() : CGoods()
{
    m_fShippingUnitPrice = 0.0;
    m_fTransCost = 0.0;
}

newCGoods::newCGoods(string, string, string, float, float, int, float fShipUPrice, float fTransCost) : CGoods()
{
    m_fShippingUnitPrice = fShipUPrice;
    m_fTransCost = fTransCost;
}
