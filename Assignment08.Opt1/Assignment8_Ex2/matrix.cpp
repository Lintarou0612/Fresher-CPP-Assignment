#include "matrix.h"
#include <iostream>

using namespace std;
Matrix::Matrix()
{
    m_row = 0;
    m_column = 0;
    m_matrix.clear();
}

Matrix::Matrix(int rows, int cols)
{
    m_row = rows;
    m_column = cols;
    if(m_row > 0 && m_column > 0)
    {
        m_matrix.resize(rows);
        for(int i = 0; i < rows; i++)
        {
            m_matrix[i].resize(cols, 0);
        }
    }
    else
    {
        cout << "Invalid matrix!" << endl;
        m_row = 0;
        m_column = 0;
        m_matrix.clear();
    }
}

void Matrix::InputMatrix()
{
    //cout << "Enter number of rows: ";
    //cin >> m_row;
    //cout << "Enter number of colums: ";
    //cin >> m_column;
    if(m_row > 0 && m_column > 0)
    {
        cout << "Enter a matrix: " << endl;
        m_matrix.resize(m_row);
        for(int i = 0; i < m_row; i++)
        {
            m_matrix[i].resize(m_column);
            for(int j = 0; j < m_column; j++)
            {
                cin >> m_matrix[i][j];
            }
        }
    }
    else
    {
        cout << "Invalid matrix!" << endl;
        m_row = 0;
        m_column = 0;
        m_matrix.clear();
    }

}

void Matrix::PrintMatrix()
{
    for(int i = 0; i < m_row; i++)
    {
        for(int j = 0; j < m_column; j++)
        {
            cout <<  m_matrix[i][j] << ' ';
        }
        cout << endl;
    }
}
// Function to create the minor matrix of element (i, j)
std::vector<std::vector<double>> minor(const std::vector<std::vector<double>>& matrix, int i, int j) {
  int n = matrix.size();
  std::vector<std::vector<double>> minorMatrix(n - 1, std::vector<double>(n - 1));
  int row = 0;
  for (int m = 0; m < n; ++m) {
    if (m == i) continue;
    int col = 0;
    for (int k = 0; k < n; ++k) {
      if (k == j) continue;
      minorMatrix[row][col] = matrix[m][k];
      col++;
    }
    row++;
  }
  return minorMatrix;
}
// Recursive function to calculate determinant
double determinant(const std::vector<std::vector<double>>& matrix) {
  int n = matrix.size();
  if (n == 1) {
    return matrix[0][0];
  }

  double det = 0;
  for (int j = 0; j < n; ++j) {
    int sign = (j % 2 == 0) ? 1 : -1;
    det += sign * matrix[0][j] * determinant(minor(matrix, 0, j));
  }

  return det;
}
bool Matrix::isInvertible() const {
  if (m_row != m_column) {
    return false; // Square matrices are required for invertibility
  }
  return abs(determinant(m_matrix)) > 1e-9; // Tolerance for floating-point errors
}

Matrix Matrix::inverse() const
{

}

Matrix Matrix::operator=(const Matrix &matrix)
{
    if(this != &matrix)
    {
        m_row = matrix.m_row;
        m_column = matrix.m_column;
        //m_matrix.resize(m_row);
        for(int i = 0; i < m_row; i++)
        {
            //m_matrix[i].resize(m_column);
            for(int j = 0; j < m_column; j++)
            {
                m_matrix[i][j] = matrix.m_matrix[i][j];
            }
        }
    }
    return *this;
}

Matrix Matrix::operator+(const Matrix &matrix)
{
    if(m_row != matrix.m_row || m_column != matrix.m_column)
    {
        throw std::runtime_error("Matrices must have the same dimensions for addition.");
    }
    Matrix result(m_row, m_column);

    for(int i = 0; i < m_row; i++)
    {
        for(int j = 0; j < m_column; j++)
        {
            result.m_matrix[i][j] = m_matrix[i][j] + matrix.m_matrix[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator-(const Matrix &matrix)
{
    if(m_row != matrix.m_row || m_column != matrix.m_column)
    {
        throw std::runtime_error("Matrices must have the same dimensions for subtraction.");
    }
    Matrix result(m_row, m_column);

    for(int i = 0; i < m_row; i++)
    {
        for(int j = 0; j < m_column; j++)
        {
            result.m_matrix[i][j] = m_matrix[i][j] - matrix.m_matrix[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator*(const Matrix &matrix)
{
    if(m_row != matrix.m_column)
    {
        throw std::runtime_error("Matrices must have the same dimensions for multiplication.");
    }
    Matrix result(m_row, matrix.m_column);

    for(int i = 0; i < m_row; i++)
    {
        for(int j = 0; j < matrix.m_column; j++)
        {
            result.m_matrix[i][j] = 0;
            for(int k = 0; k < m_column; k++)
                result.m_matrix[i][j] += m_matrix[i][k] * matrix.m_matrix[k][j];
        }
    }
    return result;
}

Matrix Matrix::operator/(const Matrix &matrix)
{
    if(m_row != matrix.m_row || m_column != matrix.m_column)
    {
        throw std::runtime_error("Matrices must have the same dimensions for division.");
    }
    Matrix result(m_row, m_column);

    for(int i = 0; i < m_row; i++)
    {
        for(int j = 0; j < m_column; j++)
        {
            result.m_matrix[i][j] = (double) m_matrix[i][j] / matrix.m_matrix[i][j];
        }
    }
    return result;
}
