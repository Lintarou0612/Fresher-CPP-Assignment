#ifndef QUEUE_H
#define QUEUE_H
#include <string>

class Queue
{
private:
    std::string m_student_list[100];
    int m_top {};
    int m_bot {};
public:
    Queue();
    void Enqueue(std::string str);
    std::string Dequeue();
    bool isEmpty();
    bool isFull();
    std::string Peek();
};

#endif // QUEUE_H
