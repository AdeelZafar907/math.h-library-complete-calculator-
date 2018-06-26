#pragma once
class BasicCalc
{
	float num1;
	float num2;
public:
	void set_num1(float);
	void set_num2(float);
	float get_num1();
	float get_num2();
	float get_addition();
	float get_subtraction();
	float get_multiplication();
	float get_division();
	BasicCalc(float = 0 , float=0);
	~BasicCalc();
};