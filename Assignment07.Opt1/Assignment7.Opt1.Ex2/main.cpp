#include <iostream>
#include <triangle.h>
#include <vector>
using namespace std;

int main()
{
    int n {};
    cout << "Enter the number of triangle: ";
    cin >> n;

    //vector<Triangle> listTriangle;
    Triangle *triangle = new Triangle[n];

    for(int i = 0; i < n; i++) {
        triangle[i].AddEdges();
        //listTriangle.push_back(triangle);
    }
    for(int i = 0; i < n; i++)
    {
        if(triangle[i].CheckPitago())
            triangle[i].PrintEdges();
    }
//    for(Triangle tri : listTriangle)
//    {
//        if(tri.CheckPitago())
//            tri.PrintEdges();
//    }
    delete []triangle;
    return 0;
}
