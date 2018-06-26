#pragma once
class matrix
{
	int row;
	int column;
public:
	void set_row(int);
	void set_col(int);
	int get_row();
	int get_col();
	void get_additionOfMatrix(int**,int**,int,int);
	void get_subtractionOfMatrix(int**, int**,int,int);
	void get_multiplicationOfMatrix(int**, int**,int,int,int);
	void get_determinantInMatrix(int**,int,int);
	void get_transpose(int**,int,int);
	matrix(int,int);
	matrix();
	matrix(matrix&);
	void display();
	~matrix();
};