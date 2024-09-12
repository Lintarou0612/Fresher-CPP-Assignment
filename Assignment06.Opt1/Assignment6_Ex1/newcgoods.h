#ifndef NEWCGOODS_H
#define NEWCGOODS_H

#include "cgoods.h"

class newCGoods : public CGoods
{
private:
    float m_fShippingUnitPrice; // đơn giá vận chuyển
    float m_fTransCost; // phí vận chuyển
public:
    int getNumOfGoods();
    int getPayment();
    void transportationCosts();
    void input();
    void output();
    void payment();
    newCGoods();
    newCGoods(string, string, string, float, float, int, float, float);
};

#endif // NEWCGOODS_H
