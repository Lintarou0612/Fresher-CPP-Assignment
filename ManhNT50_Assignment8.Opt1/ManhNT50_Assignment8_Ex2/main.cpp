#include <iostream>
#include "matrix.h"

using namespace std;

int main()
{
    Matrix matrix1 = Matrix(2,3);
    Matrix matrix2 = Matrix(2,3);

    matrix1.InputMatrix();
    matrix2.InputMatrix();
    int choice = 0;
    do
    {
        cout << "=================================================" << endl;
        cout << "Enter number (0->4) to choose!" << endl;
        cout << "1. Addition 2 matrices" << endl;
        cout << "2. Multiplication 2 matrices" << endl;
        cout << "3. Subtraction 2 matrices" << endl;
        cout << "4. Division 2 matrices" << endl;
        cout << "0. Exit" << endl;
        cout << "=================================================" << endl;

        cin >> choice;
        switch(choice)
        {
        case 1:
            try
            {
                cout << "Result: " << endl;
                Matrix result = matrix1 + matrix2;
                result.PrintMatrix();
            }
            catch (const std::exception& e)
            {
                cerr << "Error - " <<  e.what() << endl;
            }
            break;
        case 2:
            try
            {
                cout << "Result: " << endl;
                Matrix result = matrix1 * matrix2;
                result.PrintMatrix();
            }
            catch (const std::exception& e)
            {
                cerr << "Error - " <<  e.what() << endl;
            }
            break;
        case 3:
            try
            {
                cout << "Result: " << endl;
                Matrix result = matrix1 - matrix2;
                result.PrintMatrix();
            }
            catch (const std::exception& e)
            {
                cerr << "Error - " <<  e.what() << endl;
            }
            break;
        case 4:
            try
            {
                cout << "Result: " << endl;
                Matrix result = matrix1 / matrix2;
                result.PrintMatrix();
            }
            catch (const std::exception& e)
            {
                cerr << "Error - " <<  e.what() << endl;
            }
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    }
    while(choice != 0);
    return 0;
}

