#ifndef STACK_H
#define STACK_H
#include <string>

class Stack
{
private:
    std::string m_student_list[100];
    int m_number_of_students;
    //int top = -1; //store the top value of stack
public:
    Stack();
    //Stack(int);
    //~Stack();
    bool isEmpty();
    bool isFull();
    std::string peek();
    void push(std::string);
    std::string pop();
};

#endif // STACK_H
