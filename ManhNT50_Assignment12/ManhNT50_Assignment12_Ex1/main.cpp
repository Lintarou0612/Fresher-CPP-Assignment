#include <iostream>
#include "sharedpointer.h"
#include "weakpointer.h"
using namespace std;

int main()
{
    SharedPointer<int> sharedPtr(new int(10));
    WeakPointer<int> weakPtr(&sharedPtr);

    std::cout << *sharedPtr.getPtr() << std::endl; // In ra 10

    // Tăng số lượng tham chiếu
    sharedPtr.increaseRefCount();

    if (weakPtr.lock() != nullptr) {
      *weakPtr.lock() = 20; // Thay đổi giá trị của đối tượng
    }

    std::cout << *sharedPtr.getPtr() << std::endl; // In ra 20

    // Giải phóng shared pointer
    sharedPtr.decreaseRefCount();
    return 0;
}

