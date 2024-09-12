#include "sharedpointer.h"
#include <iostream>

template<class T>
T *SharedPointer<T>::getPtr() const
{
    return ptr;
}
template<class T>
SharedPointer<T>::SharedPointer(T* ptr) : refCount(1), ptr(ptr) {}

template<class T>
SharedPointer<T>::~SharedPointer()
{
    if (--refCount == 0) {
        delete ptr;
    }
}
template<class T>
SharedPointer<T>::SharedPointer(const SharedPointer& other)
    : refCount(other.refCount.load()), ptr(other.ptr) {}

template<class T>
SharedPointer<T>& SharedPointer<T>::operator=(const SharedPointer& other) {
    if (this != &other) {
        refCount.store(other.refCount.load());
        ptr = other.ptr;
    }
    return *this;
}

template<class T>
// Kiểm tra xem đối tượng có được quản lý hay không
bool SharedPointer<T>::isNull() const { return ptr == nullptr; }
template<class T>
// Tăng số lượng tham chiếu
void SharedPointer<T>::increaseRefCount() { refCount++; }
template<class T>
// Giảm số lượng tham chiếu
void SharedPointer<T>::decreaseRefCount() { refCount--; }

template class SharedPointer<int>;
