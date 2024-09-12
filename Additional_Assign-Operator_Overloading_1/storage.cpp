#include "storage.h"

Storage::Storage()
{

}

Storage::Storage(int size) : m_size{size}
{
    arr = new int[m_size];
    for(int i = 0; i < m_size; i++)
    {
        *(arr + i) = 0;
    }
}

Storage::~Storage()
{
    //delete [] arr;
}

void Storage::push_back(int var)
{
    int size = m_size + 1;
    int *x = new int[size];
    for(int i=0;i<m_size;i++)
    {
        *(x+i) = *(arr+i);
    }
    *(x+m_size) = var;
    delete [] arr;
    m_size++;
    arr = x;
    x = nullptr;
}

void Storage::push_front(int x)
{
    m_size++;
    for(int i = m_size; i >= 1; i--)
    {
        *(arr + i) = *(arr + i - 1);
    }
    *arr = x;
}

int &Storage::operator[](const int i)
{
    return *(arr + i);
}

void Storage::sort()
{
    for(int i = 0; i < m_size - 1; i++)
    {
        for(int j = i; j < m_size; j++)
        {
            if(*(arr + i) > *(arr + j))
            {
                int tmp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = tmp;
            }
        }
    }
}

std::ostream &operator<<(std::ostream &out, const Storage s)
{
    for(int i = 0; i < s.m_size; i++)
    {
        out << s.arr[i] << " ";
    }
    return out;
}


