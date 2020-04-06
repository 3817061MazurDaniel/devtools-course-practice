// Copyright 2020 Sokolov Andrey
#include <vector>
#include <algorithm>

#ifndef MODULES_MATRICES_AND_TYPICAL_OPERATIONS_INCLUDE_MATRICES_AND_TYPICAL_OPERATIONS_H_
#define MODULES_MATRICES_AND_TYPICAL_OPERATIONS_INCLUDE_MATRICES_AND_TYPICAL_OPERATIONS_H_

class Matrix {
public:
    Matrix();
    Matrix(const int _rows, const int _cols);
    Matrix(const int _rows, const int _cols, std::vector<std::vector<double>> _data);
    Matrix(const Matrix& matrix);

    Matrix& operator=(const Matrix& z);

    int getRows() const;
    int getCols() const;
    std::vector<std::vector<double>> getData() const;

    void setRows(const int _rows);
    void setCols(const int _cols);
    void setData(std::vector<std::vector<double>> _data);

    Matrix operator+ (const Matrix& z) const;
    Matrix operator- (const Matrix& z) const;
    Matrix operator* (const double& _scalar) const;
    Matrix operator* (const Matrix& z) const;

    bool operator== (const Matrix& z) const;
    bool operator!= (const Matrix& z) const;

    double determinant();
    Matrix transpose();
    Matrix takeInverseMatrix();

private:
    int rows;
    int cols;
    std::vector<std::vector<double>> data;
};

#endif  // MODULES_MATRICES_AND_TYPICAL_OPERATIONS_INCLUDE_MATRICES_AND_TYPICAL_OPERATIONS_H_
