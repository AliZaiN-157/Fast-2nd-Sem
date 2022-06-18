#include <iostream>

using namespace std;


class Matrix {
	int rows, cols;

	int ** matrix;

public:


	Matrix(int rows, int cols) 
	{
		this->rows = rows;
		this->cols = cols;
		matrix = new int* [rows];
		for (int i = 0; i < rows; i++) {
			matrix[i] = new int[cols];
		}
	};

	void setMatrix() {
		cout << "Enter matrix elements" << endl;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << "Matrix [" << i + 1 << "]" << "[" << j + 1 << "] : ";
				cin >> matrix[i][j];
			}
		}
	}

	~Matrix() {};

	Matrix operator+(const Matrix& mat) {

		Matrix temp(rows, cols);
		if (rows == mat.rows && cols == mat.cols) {
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < cols; j++) {
					temp.matrix[i][j] = matrix[i][j] + mat.matrix[i][j];
				}
			}
		}
		else {
			cout << "Invalid Subtraction" << endl;
			for (int i = 0; i < temp.rows; i++) {
				for (int j = 0; j < temp.cols; j++) {
					temp.matrix[i][j] = NULL;
				}
			}
		}
		return temp;
	}
	Matrix operator-(const Matrix& mat){

		Matrix temp(rows, cols);
		if (rows == mat.rows && cols == mat.cols) {
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < cols; j++) {
					temp.matrix[i][j] = matrix[i][j] - mat.matrix[i][j];
				}
			}
		}
		else {
			cout << "Invalid Subtraction" << endl;
			for (int i = 0; i < temp.rows; i++) {
				for (int j = 0; j < temp.cols; j++) {
					temp.matrix[i][j] = NULL;
				}
			}
		}
		return temp;

	}
	Matrix operator*(const Matrix& mat){

		Matrix temp(rows, mat.cols);

		if (cols == mat.rows) {
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < mat.cols; j++) {
					temp.matrix[i][j] = 0;
					for (int k = 0; k < cols; k++) {
						temp.matrix[i][j] = temp.matrix[i][j] + (matrix[i][k] * mat.matrix[k][j]);
					}
				}
			}
		}
		else {
			cout << "Invalid Multiplication" << endl;
			for (int i = 0; i < temp.rows; i++) {
				for (int j = 0; j < temp.cols; j++) {
					temp.matrix[i][j] = NULL;
				}
			}
		}
		return temp;
	}
	friend ostream& operator << (ostream& out, const Matrix& mat);
};

ostream& operator <<(ostream& out, const Matrix& mat)
{
	for (int i = 0; i < mat.rows; i++)
	{
		for (int j = 0; j < mat.cols; j++)
		{
			out << mat.matrix[i][j] << " ";
		}
		out << endl;
	}
	return out;
}


int main() {

	Matrix A(3, 3), B(3, 3);

	A.setMatrix();
	cout << A;

	cout << endl;

	B.setMatrix();
	cout << B;

	cout << endl;

	cout << "Addition: " << endl << A + B << endl;
	cout << "Subtraction: " << endl << A - B << endl;
	cout << "Multiplication: " << endl << A * B << endl;

}

