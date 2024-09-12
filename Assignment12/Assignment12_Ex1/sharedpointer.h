#ifndef SHAREDPOINTER_H
#define SHAREDPOINTER_H

#include <atomic>

template<class T>
class SharedPointer
{
private:
    std::atomic<int> refCount;
    T* ptr;
public:
    explicit SharedPointer(T* ptr);
    ~SharedPointer();
    SharedPointer(const SharedPointer&);
    SharedPointer<T>& operator=(const SharedPointer& other);
    T *getPtr() const;
    bool isNull() const;
    void increaseRefCount();
    void decreaseRefCount();
};

#endif // SHAREDPOINTER_H
