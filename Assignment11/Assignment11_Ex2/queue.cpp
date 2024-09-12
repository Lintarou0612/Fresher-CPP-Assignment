#include "queue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
    m_top = 0;
    m_bot = 0;
}

void Queue::Enqueue(string str)
{
    if(isFull())
    {
        cout << "This queue is full" << endl;
        return;
    }
    m_student_list[m_top] = str;
    m_top = (m_top + 1) % 100;
}

string Queue::Dequeue()
{
    if(isEmpty())
    {
        cout << "This queue is empty." << endl;
        return "";
    }
    string str = m_student_list[m_bot];
    m_bot = (m_bot + 1) % 100;
    return str;
}

bool Queue::isEmpty()
{
    return m_bot == m_top;
}

bool Queue::isFull()
{
    return ((m_top == 100) && (m_bot == 0));
}

string Queue::Peek()
{
    if(isEmpty())
    {
        cout << "This queue is empty." << endl;
        return "";
    }
    return m_student_list[m_bot];
}


