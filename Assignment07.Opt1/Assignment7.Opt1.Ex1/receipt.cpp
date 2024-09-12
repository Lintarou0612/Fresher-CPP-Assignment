#include "receipt.h"

Receipt::Receipt() : m_OldIndex{0}, m_NewIndex{0}, m_Payment{0}
{

}

long Receipt::CalPayment()
{
    int diffIndex = m_NewIndex - m_OldIndex;
    if(diffIndex == 0) return 0;
    if(diffIndex < 50)
    {
        m_Payment = 1250 * diffIndex;
    }
    else if(50 <= diffIndex && diffIndex < 100)
    {
        if(diffIndex == 50)
            m_Payment = 1500 * 50;
        else
        {
            int diffIndex2 = diffIndex - 50;
            m_Payment = 1250 * 50 + 1500 * diffIndex2;
        }
    }
    else
    {
        if(diffIndex == 100)
            m_Payment = 2000 * 100;
        else
        {
            m_Payment = (1250 + 1500) * 50 + 2000 * (diffIndex - 100);
        }
    }
    return m_Payment;
}
