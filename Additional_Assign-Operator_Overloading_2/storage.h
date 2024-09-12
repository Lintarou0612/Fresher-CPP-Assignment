#ifndef STORAGE_H
#define STORAGE_H
#include <iostream>
#include <fraction.h>

template <typename T>

class Storage
{
    T *arr;
    int size;
public:
    Storage(T a[], int);
    //Storage(T a, T);
    ~Storage();
    T max();
    T min();
    void sort();
    friend std::ostream& operator<<(std::ostream& out, Storage<T>& storage);
};

#endif // STORAGE_H
