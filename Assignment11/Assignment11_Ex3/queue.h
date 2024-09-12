#ifndef QUEUE_H
#define QUEUE_H
#include <string>
template<class T>
class Queue
{
private:
    T m_student_list[100];
    int m_top {};
    int m_bot {};
public:
    Queue();
    void Enqueue(T str);
    T Dequeue();
    bool isEmpty();
    bool isFull();
    T Peek();
};

#endif // QUEUE_H
