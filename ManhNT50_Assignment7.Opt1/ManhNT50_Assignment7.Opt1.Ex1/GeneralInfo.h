#ifndef DISPLAYINFO_H
#define DISPLAYINFO_H

#include "customer.h"
#include "receipt.h"

class GeneralInfo
{
public:
    GeneralInfo();
    void Display(Customer&, Receipt&);
    void Input(Customer&, Receipt&);
};

#endif // DISPLAYINFO_H
