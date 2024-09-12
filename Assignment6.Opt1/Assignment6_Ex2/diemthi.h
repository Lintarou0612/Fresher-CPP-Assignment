#ifndef DIEMTHI_H
#define DIEMTHI_H

#include <iostream>

class diemthi
{
private:
    double m_toan;
    double m_ly;
    double m_hoa;
public:
    void setToan();
    double getToan();
    void setLy();
    double getLy();
    void setHoa();
    double getHoa();

    diemthi();
};

#endif // DIEMTHI_H
