#ifndef WEAKPOINTER_H
#define WEAKPOINTER_H

#include <sharedpointer.h>

template <typename T>
class WeakPointer {
private:
  SharedPointer<T>* sharedPtr; // Con trỏ đến SharedPointer

public:
  // Hàm tạo
  explicit WeakPointer(SharedPointer<T>* sharedPtr);

  // Hàm copy constructor
  WeakPointer(const WeakPointer& other);
  // Hàm gán
  WeakPointer& operator=(const WeakPointer& other);

  // Lấy con trỏ đến đối tượng (nếu SharedPointer còn hợp lệ)
  T* lock() const;

  // Kiểm tra xem SharedPointer có hợp lệ hay không
  bool isNull() const;
};


#endif // WEAKPOINTER_H
