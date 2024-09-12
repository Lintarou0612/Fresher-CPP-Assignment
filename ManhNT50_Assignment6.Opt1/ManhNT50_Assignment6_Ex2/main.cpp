#include <iostream>
#include <vector>
#include <cctype>
#include <iomanip>
#include "thisinh.h"

using namespace std;

vector<ThiSinh> thiSinh;
ThiSinh ts;
void NhapDanhSachThiSinh();
void TimKiem();
void SapXep();

int main()
{
    NhapDanhSachThiSinh();
    cout << "====================================================================" << '\n';
    cout << "Ho va Ten\t\t\t" << "Que quan\t\t\t\t" << "So bao danh\t"
         << "Diem toan" << setw(10) << "Diem ly" << setw(10) << "Diem hoa" << '\n';
    //TimKiem();
    SapXep();
    return 0;
}

void NhapDanhSachThiSinh()
{
    char c;
    while(true) {
        cout << "Nhap thong tin thi sinh." << '\n';
        ts.NhapDuLieu();
        thiSinh.push_back(ts);
        cout << "Ban co muon dung lai khong? (Y/N): ";
        cin >> c;
        if(tolower(c) == 'y') break;
    }
}
void TimKiem()
{
    for(vector<ThiSinh>::size_type i = 0; i < thiSinh.size(); i++) {
        if(thiSinh.at(i).getSum() > 15) {
            thiSinh.at(i).In();
        }
    }
}

void SapXep()
{
    for(vector<ThiSinh>::size_type i = 0; i < thiSinh.size() - 1; i++)
    {
        for(vector<ThiSinh>::size_type j = i; j < thiSinh.size(); j++)
        {
            if(thiSinh.at(j).getSum() > thiSinh.at(i).getSum()) {
                ThiSinh tmp = ThiSinh();
                tmp = thiSinh.at(j);
                thiSinh.at(j) = thiSinh.at(i);
                thiSinh.at(i) = tmp;
            }
        }
    }

    for(vector<ThiSinh>::size_type i = 0; i < thiSinh.size(); i++)
    {
        thiSinh.at(i).In();
    }
}
