#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix
{
private:
    int m_row;
    int m_column;
    std::vector<std::vector<double>> m_matrix;
public:
    Matrix();
    Matrix(int,int);

    void InputMatrix();
    void PrintMatrix();
    // Function to check if the matrix is invertible
    bool isInvertible() const;
    // Function to calculate the inverse of the matrix (if invertible)
    Matrix inverse() const;

    Matrix operator=(const Matrix &matrix);
    Matrix operator+(const Matrix &);
    Matrix operator-(const Matrix &matrix);
    Matrix operator*(const Matrix &matrix);
    Matrix operator/(const Matrix &matrix);
};

#endif // MATRIX_H
