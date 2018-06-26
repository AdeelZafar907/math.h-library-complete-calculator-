#include <iostream>
#include "ScientificCalc.h"
using namespace std;
void ScientificCalculator::set_num1(float num1_)
{
	num1 = num1_;
}
void ScientificCalculator::set_num2(float num2_)
{
	num2 = num2_;
}
float ScientificCalculator::get_num1()
{
	return num1;
}
float ScientificCalculator::get_num2()
{
	return num2;
}
int ScientificCalculator::get_factorial()
{
	int factorial = 1;
	for (int i = 1; i <= num1; i++)
	{
		factorial = factorial*i;
	}
	return factorial;
}
int ScientificCalculator::get_power()
{
	int x = 1;
	for (int counter = 1; counter <= num2; counter++)
	{
		x = x*num1;
	}
	return x;
}
float ScientificCalculator::get_sin()
{
	return sin(num1*(22/7) / 180);
}
float ScientificCalculator::get_cos()
{
	return cos(num1*1.0*(22.0 / 7) / 180);
}
float ScientificCalculator::get_tan()
{
	return tan(num1*1.0*(22.0 / 7) / 180);
}
float ScientificCalculator::get_cosec()
{
	return asin(num1*1.0*(22.0 / 7) / 180);
}
float ScientificCalculator::get_sec()
{
	return acos(num1*1.0*(22.0 / 7) / 180);
}
float ScientificCalculator::get_cot()
{
	return atan(num1*1.0*(22.0 / 7) / 180);
}
float ScientificCalculator::get_square()
{
	return num1*num1;
}
float ScientificCalculator::get_cube()
{
	return num1*num1*num1;
}
float ScientificCalculator::get_SqRoot()
{
	float i = 0.1;
	float sqrt = 0;
	while (i*i <= num1)
	{
		i += 0.1;
	}
	sqrt = i-0.1;
	return sqrt;
}
float ScientificCalculator::get_CubeRoot()
{
	float i = 0.1;
	float sqrt = 0;
	while (i*i*i <= num1)
	{
		i += 0.1;
	}
	sqrt = i-0.1;
	return sqrt;
}
//float ScientificCalculator::get_log()
//{
//	int  x, y = -1;
//	float add = 0;
//	//cout << "Enter the value of number ";
//	//cin >> x;
//	int count;
//	for (count = 1; count <= num1; count++)
//	{
//		y = y* -1;
//		add = add + ((y*1.0) / count);
//	}
//	return add;
//}
float ScientificCalculator::get_log()
{
	return log10(num1);
}
float ScientificCalculator::get_logBase2()
{
		return pow(2, num1);
}
ScientificCalculator::ScientificCalculator(float num1_, float num2_)
{
	num1 = num1_;
	num2 = num2_;
}
ScientificCalculator::~ScientificCalculator()
{

}