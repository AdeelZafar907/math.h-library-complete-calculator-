#include <iostream>
#include "BasicCalculaation.h"
using namespace std;
void BasicCalc::set_num1(float num1_)
{
	num1 = num1_;
}
void BasicCalc::set_num2(float num2_)
{
	num2 = num2_;
}
float BasicCalc::get_num1()
{
	return num1;
}
float BasicCalc::get_num2()
{
	return num2;
}
float BasicCalc::get_addition()
{
	return num1 + num2;
}
float BasicCalc::get_subtraction()
{
	return num1 -num2;
}
float BasicCalc::get_multiplication()
{
	return num1*num2;
}
float BasicCalc::get_division()
{
	return num1 / num2;
}
BasicCalc::BasicCalc(float num1_,float num2_)
{
	num1 = num1_;
	num2 = num2_;
}
BasicCalc::~BasicCalc()
{

}