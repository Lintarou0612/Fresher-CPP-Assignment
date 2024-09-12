#include "triangle.h"
#include <cmath>
#include <iostream>

Triangle::Triangle()
{

}
int Triangle::count = 0;
void Triangle::AddEdges()
{
    std::cout << "Enter edges of triangle " << ++count << ": ";
    int edge = 0;
    for(int i = 0; i < 3; i++) {
        std::cin >> edge;
        m_LengthEdges.push_back(edge);
    }
}

void Triangle::PrintEdges()
{
    std::cout << "Edges of triangle: ";
    for(int i = 0; i < 3; i++)
    {
        std::cout << m_LengthEdges.at(i) << " ";
    }
    std::cout << std::endl;
}

double Triangle::Perimeter()
{
    return (m_LengthEdges.at(0) + m_LengthEdges.at(1) + m_LengthEdges.at(2));
}

double Triangle::Area()
{
    double s = (double) (m_LengthEdges.at(0) + m_LengthEdges.at(1) + m_LengthEdges.at(2)) / 2;
    return sqrt(s * (s - m_LengthEdges.at(0)) * (s - m_LengthEdges.at(1)) * (s - m_LengthEdges.at(2)));
}

bool Triangle::CheckPitago()
{
    if((m_LengthEdges.at(0) * m_LengthEdges.at(0) == m_LengthEdges.at(1) * m_LengthEdges.at(1) + m_LengthEdges.at(2) * m_LengthEdges.at(2))
            || (m_LengthEdges.at(1) * m_LengthEdges.at(1) == m_LengthEdges.at(0) * m_LengthEdges.at(0) + m_LengthEdges.at(2) * m_LengthEdges.at(2))
            || (m_LengthEdges.at(2) * m_LengthEdges.at(2) == m_LengthEdges.at(1) * m_LengthEdges.at(1) + m_LengthEdges.at(0) * m_LengthEdges.at(0)))
        return true;
    return false;
}
