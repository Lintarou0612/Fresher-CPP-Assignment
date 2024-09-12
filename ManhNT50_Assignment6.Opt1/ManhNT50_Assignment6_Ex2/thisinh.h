#ifndef THISINH_H
#define THISINH_H

#include <string>
#include "hoten.h"
#include "quequan.h"
#include "diemthi.h"

using namespace std;

class ThiSinh
{
private:
    hoten m_hoTen;
    quequan m_queQuan;
    string m_truong;
    string m_SoBaoDanh;
    int m_tuoi;
    diemthi m_diemThi;

public:
    ThiSinh();
    void NhapDuLieu();
    double getSum();
    void TimKiem();
    void In();
};

#endif // THISINH_H
