#include "ellipse.h"
#include "point.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
int Ellipse::count = 0;
Ellipse::Ellipse() : m_center(), m_radius()
{
}

Ellipse::~Ellipse()
{
}

double Ellipse::getPerimeter()
{
    return 3.14 * (3 * (m_radius.getX() + m_radius.getY())
           - sqrt((3 * m_radius.getX() + m_radius.getY()) * (m_radius.getX() + 3 * m_radius.getY())));
}

double Ellipse::getArea()
{
    return 3.14 * m_radius.getX() * m_radius.getY();
}

std::string Ellipse::deleteExtraSpaces(std::string str)
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
void Ellipse::fromString(const std::string &str)
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
    m_center.setX(numbers.at(0));
    m_center.setY(numbers.at(1));
    m_radius.setX(numbers.at(2));
    m_radius.setY(numbers.at(3));
//    if(deleteExtraSpaces(str).length() != str.length())
//        std::cout << "Error: input data dont follow standard format." << std::endl;
//    else
//    {   std::string strNoSpace = "";
//        strNoSpace += deleteExtraSpaces(str);
//        m_center->setX((int)strNoSpace[2]);
//        m_center->setY((int)strNoSpace[4]);
//        m_radius->setX((int)strNoSpace[6]);
//        m_radius->setY((int)strNoSpace[8]);
//    }
}

std::string Ellipse::toString()
{
    std::string result = "Ellipse " + std::to_string(++count) + ": Perimeter = "
            + std::to_string(getPerimeter()) + ", Area = " + std::to_string(getArea());
    return result;
}
