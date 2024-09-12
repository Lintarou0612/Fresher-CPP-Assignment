#ifndef POLYGON_H
#define POLYGON_H

#include <vector>

class Polygon
{
private:
    int m_NumEdges;
    std::vector<double> m_Angle;
    static int count;
protected:
    std::vector<int> m_LengthEdges;
public:
    double Perimeter();
    std::vector<int> getEdges();
    void AddEdges();
    void ComputeAngle();
    void SetNumEdges();
    void PrintEdges() const;
    void PrintAngle(Polygon &) const;
    Polygon();
};

#endif // POLYGON_H
