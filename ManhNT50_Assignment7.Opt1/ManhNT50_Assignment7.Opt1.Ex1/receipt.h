#ifndef RECEIPT_H
#define RECEIPT_H

class Receipt
{
private:
    int m_OldIndex;
    int m_NewIndex;
    long m_Payment;
public:
    Receipt();
    long CalPayment();
    friend class GeneralInfo;
};


#endif // RECEIPT_H
