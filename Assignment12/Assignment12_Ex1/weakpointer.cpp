#include "weakpointer.h"
template<class T>
WeakPointer<T>::WeakPointer(SharedPointer<T>* sharedPtr)
    : sharedPtr(sharedPtr) {}

template<typename T>
WeakPointer<T>::WeakPointer(const WeakPointer &other) : sharedPtr(other.sharedPtr) {}

template<class T>
T* WeakPointer<T>::lock() const {
    if (sharedPtr != nullptr)
    {
        return sharedPtr->getPtr();
    }
    else
    {
        return nullptr;
    }
}
template<class T>
WeakPointer<T>& WeakPointer<T>::operator=(const WeakPointer& other)
{
  sharedPtr = other.sharedPtr;
  return *this;
}
template<class T>
bool WeakPointer<T>::isNull() const
{
    return sharedPtr == nullptr;
}

template class WeakPointer<int>;
