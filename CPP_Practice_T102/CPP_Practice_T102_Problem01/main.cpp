#include <iostream>
#include <cmath>

using namespace std;

void typeOfTriangle(double points[])
{
    //A(x[0],x[1]), b(x[2],x[3]), c(x[4],x[5])
    double dx1 = points[0] - points[2];
    double dx2 = points[2] - points[4];
    double dx3 = points[4] - points[0];

    double dy1 = points[1] - points[3];
    double dy2 = points[3] - points[5];
    double dy3 = points[5] - points[1];
    // create edges of triangle
    double ab = sqrt(dx1 * dx1 + dy1 * dy1);
    double bc = sqrt(dx2 * dx2 + dy2 * dy2);
    double ca = sqrt(dx3 * dx3 + dy3 * dy3);

    if(ab < bc + ca && bc < ab + ca && ca < bc + ab)
    {
        if(ab*ab==bc*bc+ca*ca || bc*bc==ca*ca+ab*ab || ca*ca==ab*ab+bc*bc)
        {
            if(ab==bc || bc==ca || ca == ab)
                cout << "Right-isosceles triangle" << endl;
            else
                cout << "Right triangle" << endl;
        }
        else if(ab==bc && bc==ca)
            cout << "Equilaterial triangle" << endl;
        else if(ab==bc || bc==ca || ca == ab)
            cout << "Isosceles triangle" << endl;
        else
            cout << "Normal triangle" << endl;
    }
    else
    {
        cout << "Not a triangle" << endl;
    }
}

int main()
{
    bool flag = false;
    double threePointCoordinate[6] {};
    for(int i = 0; i < 6; i++)
    {
        cin >> threePointCoordinate[i];
        if(threePointCoordinate[i] < 0 || threePointCoordinate[i] > 2020)
        {
            cout << "Invalid point!" << endl;
            flag = true;
            break;
        }
    }
    if(!flag)
        typeOfTriangle(threePointCoordinate);
    return 0;
}
