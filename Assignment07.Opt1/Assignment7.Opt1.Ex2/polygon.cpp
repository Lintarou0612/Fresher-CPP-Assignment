#include "polygon.h"
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double Polygon::Perimeter()
{
    int perimeter = 0;
    for(size_t i = 0; i < m_LengthEdges.size(); i++)
    {
        perimeter += m_LengthEdges.at(i);
    }
    return perimeter;
}

std::vector<int> Polygon::getEdges()
{
    return m_LengthEdges;
}

void Polygon::AddEdges()
{
    cout << "Enter the number of edges: ";
    cin >> m_NumEdges;
    cout << "Enter edges: ";
    for(int edge = 0; edge < m_NumEdges; edge++) {
        cin >> edge;
        m_LengthEdges.push_back(edge);
    }
}

void Polygon::ComputeAngle()
{
    for(int i = 0; i < m_NumEdges; i++) {
        double angle = acos((pow(m_LengthEdges[i], 2) + pow(m_LengthEdges[(i + 1) % m_NumEdges], 2) -
                                         pow(m_LengthEdges[(i + 2) % m_NumEdges], 2)) /
                                        (2 * m_LengthEdges[i] * m_LengthEdges[(i + 1) % m_NumEdges]));
        m_Angle.push_back(angle * 180 / M_PI);
    }
}

void Polygon::SetNumEdges()
{
    cin >> m_NumEdges;
}

void Polygon::PrintEdges() const
{
    cout << "Edges of polygon " << ++count << ": ";
    for(int edge : m_LengthEdges)
    {
        cout << edge << " ";
    }
}

void Polygon::PrintAngle(Polygon &polygon) const
{
    polygon.ComputeAngle();
    cout << "Angles of polygon " << ++count << ": ";
    for(double angle : m_Angle)
    {
        cout << angle << " ";
    }
}
int Polygon::count = 0;
Polygon::Polygon() : m_NumEdges{0}, m_Angle{0.0}
{

}
