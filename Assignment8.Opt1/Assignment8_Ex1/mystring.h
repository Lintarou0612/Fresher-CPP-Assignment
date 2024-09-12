#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

class String
{
private:
    char *m_mystring;
    int m_length;
public:
    String(); //default constructor
    ~String(); //destructor
    String(const String &); //copy constructor
    void InputString();
    void OutputString();
    char* getString() const;
    int getLength() const;
    void Delete();
    void Reverse();
    String operator=(const String &);
    String operator+(const String &);
    friend String operator+(const String &, char);
    bool operator==(const String &str);
    friend std::ostream& operator<<(std::ostream &, const String &);
    friend std::istream& operator>>(std::istream &, String &);
};

#endif // MYSTRING_H
