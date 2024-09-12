#include "storage.h"

template <class T>
Storage<T>::Storage(T a[], int size)
{
    this->size = size;
    //arr = new T[size];
    for(int i = 0; i < size; i++)
    {
        arr[i] = a[i];
    }
}
template <class T>
Storage<T>::~Storage() {
    // Deallocate memory when the object goes out of scope
    delete[] arr;
}

template <class T>
T Storage<T>::max()
{
    T max = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }
    return max;
}
template <class T>
T Storage<T>::min()
{
    T min = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(min > arr[i])
            min = arr[i];
    }
    return min;
}
template <class T>
void Storage<T>::sort()
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i; j < size; j++)
        {
            if(arr[j] < arr[i])
            {
                T tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

template<class T>
std::ostream &operator<<(std::ostream &out, Storage<T> &storage)
{
    for(int i = 0; i < storage.size; i++)
    {
        out << storage.arr[i] << " ";
    }
    return out;
}
template class Storage<int>;
template class Storage<Fraction>;
