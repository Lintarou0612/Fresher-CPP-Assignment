#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include <string>
#include <vector>
#include <shape.h>

class Shape;
class ShapeFactory
{
public:
    ShapeFactory();
    Shape* createShape(int type, const std::string &s);
    std::vector<Shape*> readShapesFromFile(const std::string &filename);
    void saveShapesToFile(const std::string &filename, const std::vector<Shape*> &shapes);
};

#endif // SHAPEFACTORY_H
