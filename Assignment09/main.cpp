#include <iostream>
#include "shapefactory.h"

using namespace std;

int main()
{
    ShapeFactory factory;
    vector<Shape*> shapes = factory.readShapesFromFile("/home/manh/Code/Assignment9/data.txt");

    for(size_t i = 0; i < shapes.size(); i++)
    {
        Shape* shape = shapes.at(i);
        cout << "Shape " << i << ": Perimeter = " << shape->getPerimeter()
             << ", Area = " << shape->getArea() << endl;
    }
    factory.saveShapesToFile("/home/manh/Code/Assignment9/output.txt", shapes);

    // delete shapes
    for(size_t i = 0; i < shapes.size(); i++)
    {
        delete shapes.at(i);
    }

    return 0;
}
