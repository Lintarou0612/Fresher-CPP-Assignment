#include "mystring.h"
#include <iostream>
#include <cstring>

using namespace std;
String::String() : m_mystring{nullptr}, m_length{0} { }
String::~String()
{
    delete[] m_mystring;
    if(m_mystring != nullptr)
        m_mystring = nullptr;
}

String::String(const String &str)
{
    if(str.m_mystring != nullptr)
    {
        m_length = str.m_length;
        m_mystring = new char[m_length + 1];
        strcpy(m_mystring, str.m_mystring);
    }
    else
    {
        m_mystring = nullptr;
        m_length = 0;
    }
}
void String::InputString()
{
    char *buffer = new char[1000];
    cin.getline(buffer, 1000);
    if(m_mystring != nullptr)
    {
        delete[] m_mystring;
        m_mystring = nullptr;
    }
    m_length = strlen(buffer);
    m_mystring = new char[m_length + 1];
    strcpy(m_mystring, buffer);
    delete[]buffer;
}

void String::OutputString()
{
    cout << m_mystring << endl;
}

char *String::getString() const
{
    return m_mystring;
}

int String::getLength() const
{
    return m_length;
}

void String::Delete()
{
    if(m_mystring != nullptr)
        delete [] m_mystring;
    m_mystring = nullptr;
    m_length = 0;
}

void String::Reverse()
{
    if(m_mystring != nullptr && m_length > 0)
    {
        for(int i = 0; i < m_length / 2; i++)
        {
            int tmp = m_mystring[m_length-1-i];
            m_mystring[m_length-1-i] = m_mystring[i];
            m_mystring[i] = tmp;
        }
    }
}

String String::operator=(const String &str)
{
    if(this != &str)
    {
        if(m_mystring != nullptr)
            delete[]m_mystring;
        m_length = str.m_length;
        m_mystring = new char[m_length + 1];
        strcpy(m_mystring, str.m_mystring);
    }
    return *this;
}

String String::operator+(const String &str1)
{
    String result;
    result.m_length = m_length + str1.m_length;
    result.m_mystring = new char[result.m_length + 1];
    if(m_mystring != nullptr)
        strcpy(result.m_mystring, m_mystring);
    //start at address of result.m_mystring
    //move the pointer a m_length positions forward
    strcpy(result.m_mystring + m_length, str1.m_mystring);
    return result;
}

String operator+(const String &str, char ch)
{
    String result;
    char *c = &ch;
    result.m_length = str.m_length + 1;
    result.m_mystring = new char[result.m_length + 1];
    if(str.m_mystring != nullptr)
        strcpy(result.m_mystring, str.m_mystring);
    strcpy(result.m_mystring + str.m_length, c);
    return result;

}

bool String::operator==(const String &str)
{
    if(m_length != str.m_length)
        return false;
    for(int i = 0; i < m_length; i++)
    {
        if(m_length != str.m_length)
            return false;
    }
    return true;
}

std::ostream& operator<<(std::ostream &os, const String &str) {
  if (str.m_mystring != nullptr) {
    os << str.m_mystring;
  }
  return os;
}

std::istream& operator>>(std::istream &is, String &s) {
  char buffer[1000];
  is.getline(buffer, 1000);

  if (s.m_mystring != nullptr) {
    delete[] s.m_mystring;
  }

  s.m_length = strlen(buffer);
  s.m_mystring = new char[s.m_length + 1];
  strcpy(s.m_mystring, buffer);

  return is;
}

