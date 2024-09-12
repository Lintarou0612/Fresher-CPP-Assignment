#ifndef STACK_H
#define STACK_H
#include <string>
template<class T>
class Stack
{
private:
    T m_student_list[100];
    int m_number_of_students;
    //int top = -1; //store the top value of stack
public:
    Stack();
    //Stack(int);
    //~Stack();
    bool isEmpty();
    bool isFull();
    T peek();
    void push(T);
    T pop();
};

#endif // STACK_H
