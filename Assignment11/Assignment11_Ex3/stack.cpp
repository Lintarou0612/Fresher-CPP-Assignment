#include "stack.h"
#include <iostream>
#include <string>

template<class T>
Stack<T>::Stack() : m_number_of_students{-1}
{
}

//Stack::~Stack()
//{
//    delete[] m_student_list;
//    if(m_student_list != nullptr)
//        m_student_list = nullptr;
//}
template<class T>
bool Stack<T>::isEmpty()
{
    return (m_number_of_students == -1);
}
template<class T>
T Stack<T>::peek()
{
    return m_student_list[m_number_of_students];
}
template<class T>
bool Stack<T>::isFull()
{
    return (m_number_of_students == 100 - 1);
}
template<class T>
void Stack<T>::push(T str)
{
    if(isFull())
    {
        std::cout << "Stack is full!" << std::endl;
        return;
    }
    m_number_of_students++;
    m_student_list[m_number_of_students] = str;
}
template<class T>
T Stack<T>::pop()
{
    if(isEmpty())
    {
        T r{};
        std::cout << "Stack is empty." << '\n';
        return r;
    }
    T str = m_student_list[m_number_of_students];
    m_number_of_students--;
    return str;
}
template class Stack<int>;
template class Stack<double>;
template class Stack<std::string>;
