#include "thisinh.h"
#include <iostream>
#include <iomanip>

using namespace std;

ThiSinh::ThiSinh() : m_hoTen(), m_queQuan(), m_truong(""), m_SoBaoDanh(""), m_tuoi(0), m_diemThi()
{
}

void ThiSinh::NhapDuLieu()
{
    cout << "Nhap ho: ";
    m_hoTen.setHo();
    cout << "Nhap ten dem: ";
    cin.ignore();
    m_hoTen.setTenDem();
    cout << "Nhap ten: ";
    m_hoTen.setTen();

    cout << "Nhap xa: ";
    cin.ignore();
    m_queQuan.setXa();
    cout << "Nhap huyen: ";
    m_queQuan.setHuyen();
    cout << "Nhap tinh/thanh pho: ";
    m_queQuan.setTinh();
    cout << "Nhap ten truong: ";
    cin.ignore();
    getline(cin,m_truong);
    cout << "Nhap so bao danh: ";
    cin >> m_SoBaoDanh;
    cout << "Nhap diem toan: ";
    m_diemThi.setToan();
    cout << "Nhap diem ly: ";
    m_diemThi.setLy();
    cout << "Nhap diem hoa: ";
    m_diemThi.setHoa();
}

void ThiSinh::In()
{
    cout << m_hoTen.getHoVaTen() << setw(10) << m_queQuan.getQueQuan()
         << setw(10) << m_SoBaoDanh << setw(10) << m_diemThi.getToan()
         << setw(10) << m_diemThi.getLy() << setw(10) << m_diemThi.getHoa() << '\n';
}

double ThiSinh::getSum()
{
    return (m_diemThi.getToan() + m_diemThi.getLy() + m_diemThi.getHoa());
}
