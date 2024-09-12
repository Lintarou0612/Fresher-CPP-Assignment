#include "queue.h"
#include <iostream>
using namespace std;
template<class T>
Queue<T>::Queue()
{
    m_top = 0;
    m_bot = 0;
}
template<class T>
void Queue<T>::Enqueue(T str)
{
    if(isFull())
    {
        cout << "This queue is full" << endl;
        return;
    }
    m_student_list[m_top] = str;
    m_top = (m_top + 1) % 100;
}
template<class T>
T Queue<T>::Dequeue()
{
    if(isEmpty())
    {
        T r{};
        cout << "This queue is empty." << endl;
        return r;
    }
    T str = m_student_list[m_bot];
    m_bot = (m_bot + 1) % 100;
    return str;
}
template<class T>
bool Queue<T>::isEmpty()
{
    return m_bot == m_top;
}
template<class T>
bool Queue<T>::isFull()
{
    return ((m_top == 100) && (m_bot == 0));
}
template<class T>
T Queue<T>::Peek()
{
    if(isEmpty())
    {
        T r{};
        cout << "This queue is empty." << endl;
        return r;
    }
    return m_student_list[m_bot];
}

template class Queue<int>;
template class Queue<double>;
template class Queue<string>;
