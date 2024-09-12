#include "quadrilateral.h"
#include <cmath>

Quadrilateral::Quadrilateral()
{

}

double Quadrilateral::Perimeter()
{
    return (m_LengthEdges.at(0) + m_LengthEdges.at(1) + m_LengthEdges.at(2) + m_LengthEdges.at(3));
}

double Quadrilateral::Area()
{
    double s = (double) (m_LengthEdges.at(0) + m_LengthEdges.at(1) + m_LengthEdges.at(2) + m_LengthEdges.at(3)) / 2;
    return sqrt(s * (s - m_LengthEdges.at(0)) * (s - m_LengthEdges.at(1)) * (s - m_LengthEdges.at(2)) * (s - m_LengthEdges.at(3)));
}
