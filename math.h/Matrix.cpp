#include "Matrix.h"
#include <iostream>
using namespace std;
matrix::matrix()
{
	row = 0;
	column = 0;
}
matrix::matrix(matrix &temp)
{
	row = temp.row;
	column = temp.column;
}
void matrix::set_row(int row_)
{
	row = row_;
}
void matrix::set_col(int col_)
{
	column = col_;
}
int matrix::get_row()
{
return row;
}
int matrix::get_col()
{
	return column;
}
void matrix::get_additionOfMatrix(int **arr1, int **arr2, int row, int col)
{
	int **arr3;
	arr3 = new int*[row];
	for (int i = 0; i < row; i++)
	{
		arr3[i] = new int[col];
	}
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			arr3[r][c] = arr1[r][c] + arr2[r][c];
		}
	}



	cout << "Matrix after addition is " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
}
void matrix::get_subtractionOfMatrix(int **arr1, int **arr2, int row, int col)
{
	int **arr3;
	arr3 = new int*[row];
	for (int i = 0; i < row; i++)
	{
		arr3[i] = new int[col];
	}
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			arr3[r][c] = arr1[r][c] - arr2[r][c];
		}
	}
	cout << "Matrix after Subtraction is " << endl;
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << arr3[r][c] << " ";
		}
		cout << endl;
	}
}
void matrix::get_multiplicationOfMatrix(int **arr1, int **arr2, int rm1, int cm1, int cm2)
{
	int **arr3;
	/*matrix temp;
	temp.row = m1.row;
	temp.col = m2.col;
	for (int i = 1; i <= temp.row; i++)
	for (int j = 1; j <= temp.col; j++)
	{
	temp.a[i][j] = 0;
	{
	for (int k = 0; k <= temp.col; k++)
	temp.a[i][j] += m1.a[i][k] * m2.a[k][j];
	}
	}
	return temp;*/
	for (int r = 1; r <= rm1; r++)
	{
		for (int c = 1; c < cm1; c++)
		{
			arr3[r][c] = 0;
			{
				for (int k = 0; k < cm1; k++)
				{
					arr3[r][c] += arr1[r][k] * arr2[k][c];
					cout << arr3 << " ";
				}
				cout << endl;
			}
		}
	}
}
void matrix::get_determinantInMatrix(int **arr, int row, int col)
{
	int det = 0;
	if (row == 1 && col == 1)
	{
		det = arr[0][0];
		cout << "Determinant of this matrix is = " << det << endl;
	}
	else if (row == 2 && col == 2)
	{
		det = (arr[0][0] * arr[1][1]) - arr[1][0] * arr[0][1];
		cout << "Determinant of this matrix is = " << det << endl;
	}
	else if (row == 3 && col == 3)
	{
		det = arr[0][0] * ((arr[1][1] * arr[2][2]) - (arr[2][1] * arr[1][2])) - arr[0][1] * (arr[1][0] * arr[2][2] - arr[2][0] * arr[1][2]) + arr[0][2] * (arr[1][0] * arr[2][1] - arr[2][0] * arr[1][1]);
		cout << "Determinant of this matrix is = " << det << endl;
	}

}
void matrix::get_transpose(int **arr, int row, int col)
{
	cout << "Transpose of matrix is " << endl;
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << arr[c][r];
			cout << " ";
		}
		cout << endl;
	}
}
void matrix::display()
{
	cout << "row " << row << endl;
	cout << "column " << column << endl;
}
matrix::matrix(int col_,int row_)
{
	column = col_;
	row = row_;
}
matrix::~matrix()
{

}