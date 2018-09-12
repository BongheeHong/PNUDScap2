#pragma once
#include <iostream>
using namespace std;

// 보통 행렬에 대하여add, sub, mult, transpose 구현하는 코딩
class Matrix {
public:
	Matrix(int row, int col);
	int GetData();
	Matrix Transpose();
	int Display();
	//Matrix Add(Matrix b);
	Matrix Multiply(Matrix b);
	int CompareRowCol(Matrix b);
private:
	int rows, cols;
	//int Term[rows][cols];
	int *Term;//the add 2.6ress of a[i][j] = 0 + i * cols + j => Fig2.6
};

Matrix::Matrix(int row, int col) : rows(row), cols(col)
{
	this->Term = new int[rows * cols];
}

int Matrix::GetData() {
	int input_value = 0;
	cout << "rows = " << rows << "  cols = " << cols << endl;
	for (int j = 0; j < rows * cols; j++)
	{
		cout << "term value = ";
		cin >> input_value;
		cout << " " << endl;
		this->Term[j] = input_value;
		cout << Term[j] << endl;
	}
	return 0;
}

Matrix Matrix::Transpose() {
	Matrix b(cols, rows);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			b.Term[j*rows + i] = Term[i*cols + j];
		}
	}
	return b;

}

Matrix Matrix::Multiply(Matrix b) {
	if (cols != b.rows) cout << "Incompatible matrices" << endl;
	else{
		Matrix c(rows, b.cols);
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < b.cols; j++)
			{
				int sum = 0;
				for (int k = 0; k < cols; k++)
				{
					sum = sum + Term[i*cols + k] * b.Term[k*b.cols + j];
					c.Term[i*c.cols + j] = sum;
				}
			}
		}
		return c;
	}
}


int Matrix::CompareRowCol(Matrix b) {
	if (cols != b.rows) return 1;
	else return 0;
}

int Matrix::Display() {
	//int n = rows * cols;
	for (int i = 0; i < rows; i++)
	{
		cout << endl;
		for (int j = 0; j < cols; j++)
			cout << this->Term[i*cols + j] << " ";
	}
	cout << endl;
	return 0;
}
