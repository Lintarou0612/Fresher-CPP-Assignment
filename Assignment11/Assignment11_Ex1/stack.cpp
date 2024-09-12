#include "stack.h"
#include <iostream>

Stack::Stack() : m_number_of_students{-1}
{
    for(int i = 0; i < 100; i++)
        m_student_list[i] = "";
    //m_student_list = new std::string[m_number_of_students];
}

//Stack::~Stack()
//{
//    delete[] m_student_list;
//    if(m_student_list != nullptr)
//        m_student_list = nullptr;
//}

bool Stack::isEmpty()
{
    return (m_number_of_students == -1);
}

std::string Stack::peek()
{
    return m_student_list[m_number_of_students];
}

bool Stack::isFull()
{
    return (m_number_of_students == 100 - 1);
}

void Stack::push(std::string str)
{
    if(isFull())
    {
        std::cout << "Stack is full!" << std::endl;
        return;
    }
    m_number_of_students++;
    m_student_list[m_number_of_students] = str;
}

std::string Stack::pop()
{
    if(isEmpty())
    {
        std::cout << "Stack is empty." << '\n';
        return "";
    }
    std::string str = m_student_list[m_number_of_students];
    m_number_of_students--;
    return str;
}
