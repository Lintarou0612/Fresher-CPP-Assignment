#include "circle.h"
#include "point.h"
#include <iostream>
#include <vector>
#include <sstream>
int Circle::count = 0;
Circle::Circle() : m_center(), m_radius{0.0}
{
}

Circle::~Circle()
{
}

double Circle::getPerimeter()
{
    return 2 * 3.14 * m_radius;
}

double Circle::getArea()
{
    return 3.14 * m_radius * m_radius;
}

std::string Circle::deleteExtraSpaces(std::string str)
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
void Circle::fromString(const std::string &str)
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
    m_radius = numbers.at(2);

//        std::string tmp = ""; //using to convert char to string
//        m_center->setX(stoi(tmp.append(1,str[2])));
//        m_center->setY(stoi(tmp.append(1,str[4])));
//        m_radius = stoi(tmp.append(1,str[6]));
//    }
}

std::string Circle::toString()
{
    std::string result = "Circle " + std::to_string(++count) + ": Perimeter = "
            + std::to_string(getPerimeter()) + ", Area = " + std::to_string(getArea());
    return result;
}
