#include "shapefactory.h"
#include "triangle.h"
#include "circle.h"
#include "rectangle.h"
#include "ellipse.h"
#include <iostream>
#include <fstream>

ShapeFactory::ShapeFactory()
{

}

Shape *ShapeFactory::createShape(int type, const std::string &s)
{
    Shape* shape = nullptr;

    switch(type)
    {
    case 0:
        shape = new Triangle();
        break;
    case 1:
        shape = new Rectangle();
        break;
    case 2:
        shape = new Circle();
        break;
    case 3:
        shape = new Ellipse();
        break;
    default:
        std::cout << "Error: Can not recognize this shape!" << std::endl;
    }

    if(shape != nullptr)
    {
        shape->fromString(s);
    }

    return shape;
}

std::vector<Shape *> ShapeFactory::readShapesFromFile(const std::string &filename)
{
    std::vector<Shape*> shapes;

    // read from file
    std::ifstream file;
    file.open(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
    }
    std::string data = "";
    while(!file.eof())
    {
        std::getline(file, data);
        Shape* shape = createShape(((int)data[0] - 48), data);
        shapes.push_back(shape);
    }
    file.close();
    return shapes;
}

void ShapeFactory::saveShapesToFile(const std::string &filename, const std::vector<Shape *> &shapes)
{
    // open file
    std::ofstream savedFile(filename, std::ios::trunc);

    if (!savedFile.is_open())
        std::cerr << "Failed to open file." << std::endl;
    // save shapes to file
    for(size_t i = 0; i < shapes.size(); i++)
    {
        Shape* shape = shapes.at(i);

        savedFile << shape->toString();
        savedFile << '\n';
    }

    // close file
    savedFile.close();
}
