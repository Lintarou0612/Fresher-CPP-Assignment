#include "triangle.h"
#include "point.h"
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <sstream>

int Triangle::count = 0;
Triangle::Triangle()
{
    m_vertex1 = Point();
    m_vertex2 = Point();
    m_vertex3 = Point();
}

double Triangle::getPerimeter()
{
    return m_vertex1.Distance(m_vertex2) + m_vertex2.Distance(m_vertex3) + m_vertex3.Distance(m_vertex1);
}

double Triangle::getArea()
{
    double a = m_vertex1.Distance(m_vertex2);
    double b = m_vertex2.Distance(m_vertex3);
    double c = m_vertex3.Distance(m_vertex1);
    double s = (a + b + c) / 2;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

std::string Triangle::deleteExtraSpaces(std::string str)
{
    std::string tmp;
        bool spaceFound = 0;
        int j = -1;
        int len = str.length();
        //Skip all nth first whitespaces
        while (++j < len && str[j] == ' ');
        for (int i = j; i < len; i++)
        {
            if (str[i] != ' ')
            {
                tmp.push_back(str[i]);
                spaceFound = 0;
            }
            else if (str[i] == ' ' && spaceFound == 0)
            {
                tmp.push_back(str[i]);
                spaceFound = 1;
            }
        }
        if (tmp[str.length() - 1] == ' ')
            tmp.pop_back();
        return tmp;
}
void Triangle::fromString(const std::string &str)
{
    int len = str.length();
    std::stringstream ss(str.substr(2,len - 1));
    std::vector<double> numbers;
    std::string token;

    while (std::getline(ss, token, ' ')) {
        if (!token.empty()) {
            try {
                numbers.push_back(std::stod(token));
            } catch (const std::invalid_argument& e) {
                // Xử lý nếu token không chứa số hợp lệ
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }
    }
    m_vertex1.setX(numbers.at(0));
    m_vertex1.setY(numbers.at(1));
    m_vertex2.setX(numbers.at(2));
    m_vertex2.setY(numbers.at(3));
    m_vertex3.setX(numbers.at(4));
    m_vertex3.setY(numbers.at(5));
//    if(deleteExtraSpaces(str).length() != str.length())
//        std::cout << "Error: input data dont follow standard format." << std::endl;
//    else
//    {
//        std::string strNoSpace = "";
//        strNoSpace += deleteExtraSpaces(str);
//        m_vertex1->setX((int)strNoSpace[2]);
//        m_vertex1->setY((int)strNoSpace[4]);
//        m_vertex2->setX((int)strNoSpace[6]);
//        m_vertex2->setY((int)strNoSpace[8]);
//        m_vertex2->setX((int)strNoSpace[10]);
//        m_vertex2->setY((int)strNoSpace[12]);
//    }
}

std::string Triangle::toString()
{
    std::string result = "Triangle " + std::to_string(++count) + ": Perimeter = "
            + std::to_string(getPerimeter()) + ", Area = " + std::to_string(getArea());
    return result;
}
