#include "rectangle.h"
#include "point.h"
#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>
Rectangle::Rectangle() : m_center(), m_width{0.0}, m_length{0.0}
{ 
}

Rectangle::~Rectangle()
{
}

int Rectangle::count = 0;

double Rectangle::getPerimeter()
{
    return 2 * (m_length + m_width);
}

double Rectangle::getArea()
{
    return m_length * m_width;
}

std::string Rectangle::deleteExtraSpaces(std::string str)
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
void Rectangle::fromString(const std::string &str)
{
    //int len = str.length();
    std::stringstream ss(str.substr(2));
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
    m_width = numbers.at(2);
    m_length = numbers.at(3);
    //3 4 45 22 11 5
//    for(int i = 1; i < len; i++)
//    {
//        if(str[i] == ' ')
//        {
//            str.substr(i+1,)
//        }
//    }
//    if(deleteExtraSpaces(str).length() != str.length())
//        std::cout << "Error: input data dont follow standard format." << std::endl;
//    else
//    {   std::string strNoSpace = "";
//        strNoSpace += deleteExtraSpaces(str);

//        m_center->setX(atoi(strNoSpace[2]));
//        m_center->setY((double)strNoSpace[4]);
//        m_width = (int)strNoSpace[6];
//        m_length = (int)strNoSpace[8];
//    }
}

std::string Rectangle::toString()
{
    std::string result = "Rectangle " + std::to_string(++count) + ": Perimeter = "
            + std::to_string(getPerimeter()) + ", Area = " + std::to_string(getArea());
    return result;
}
