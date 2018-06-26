#pragma once
#include <iostream>
#include "Complex.h"
using namespace std;
complex::complex()
{
	real = 0;
	imaginary = 0;
}
complex::complex(complex &temp)
{
	real = temp.real;
	imaginary = temp.imaginary;
}
void complex::set_real(double real_)
{
	real = real_;
}
void complex::set_imun(double imaginary_)
{
	imaginary = imaginary_;
}
double complex::get_real()
{
	return real;
}
double complex::get_imaginary()
{
	return imaginary;
}
void complex::input(double real_=0, double imaginary_=0)
{
	real = real_;
	imaginary = imaginary_;
}
complex complex::get_additionInComplex(complex obj1,complex obj2)
{
	complex result;
	result.real = obj1.real + obj2.real;
	result.imaginary = obj1.imaginary + obj2.imaginary;
	return result;
}
complex complex::get_subtractionInComplex(complex obj1,complex obj2)
{
	complex result;
	result.real = obj1.real - obj2.real;
	result.imaginary = obj1.imaginary - obj2.imaginary;
	return result;

}
complex complex::get_multiplicationInComplex(complex obj1,complex obj2)
{
	complex result;
	result.real = (obj1.real*obj2.real) - (obj1.imaginary*obj2.imaginary);
	result.imaginary = (obj1.real*obj2.imaginary) + (obj2.real*obj1.imaginary);
	return result;
}
complex complex::get_divisionInComplex(complex obj1, complex obj2)
{
	/*a = (a*c) - (b*d) / (c*c) + (d*d);
	b = (a*d) + (b*c) / (c*c) + (d*d);
	output(a, b);
	return true;*/
	complex result;
	result.real = ((obj1.real*obj2.real) - (obj1.imaginary*obj2.imaginary)) / ((obj2.real*obj2.real) + (obj2.imaginary*obj2.imaginary));
	result.imaginary = ((obj1.real*obj2.imaginary) + (obj1.imaginary*obj2.real)) / ((obj2.real*obj2.real) + (obj2.imaginary*obj2.imaginary));
	return result;
}
double complex::get_modulusInComplex()
{
	double a, b;
	a = real*real;
	b = imaginary*imaginary;
	return a + b;
}
complex::complex(double real_, double imaginary_)
{
	real = real_;
	imaginary = imaginary_;

}
void complex::display()
{
	cout << "real " << real << endl;
	cout << "imaginery " << imaginary << endl;
}
complex::~complex()
{

}