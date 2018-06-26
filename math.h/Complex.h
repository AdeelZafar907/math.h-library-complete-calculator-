#pragma once
class complex
{
	double real;
	double imaginary; // imaginary
public:
	void set_real(double);
	void set_imun(double);
	void input(double, double);
	void output(double, double);
	double get_real();
	double get_imaginary();
	complex get_additionInComplex(complex,complex);
	complex get_subtractionInComplex(complex,complex);
	complex get_multiplicationInComplex(complex, complex);
	complex get_divisionInComplex(complex,complex);
	double get_modulusInComplex();
	complex(double, double);
	complex();
	complex(complex&);
	void display();
		~complex ();
};