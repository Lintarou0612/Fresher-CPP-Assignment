#ifndef STORAGE_H
#define STORAGE_H

#include <iostream>

class Storage
{
private:
    int *arr;
    int m_size;
    int* copy();
public:
    Storage();
    Storage(int);
    ~Storage();
    void push_back(int);
    void push_front(int);
    int& operator[](const int);
    void sort();
    friend std::ostream& operator<<(std::ostream& out, const Storage s);
};

#endif // STORAGE_H
