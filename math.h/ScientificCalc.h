#pragma once
class ScientificCalculator
{
	float num1;
	float num2;
public:
	void set_num1(float);
	void set_num2(float);
	float get_num1();
	float get_num2();
	int get_factorial();
	int get_power();
	float get_sin();
	float get_cos();
	float get_tan();
	float get_cosec();
	float get_sec();
	float get_cot();
	float get_log();
	float get_square();
	float get_cube();
	float get_SqRoot();
	float get_CubeRoot();
	float get_logBase2();
	ScientificCalculator(float = 0, float = 0);
	~ScientificCalculator();
};