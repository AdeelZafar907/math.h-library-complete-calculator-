#include <iostream>
#include "Temperature.h"
using namespace std;
Temperature::Temperature(float val_)
{
	value = val_;
}
Temperature::~Temperature()
{

}
void Temperature::set_value(float val_)
{
	value = val_;
}
float Temperature::get_value()
{
	return value;
}
float Temperature::get_CentiToFarhen()
{
	float fah = ((value * 9) / 5) + 32;
	return fah;
}
float Temperature::get_CentiToKelvin()
{
	return (value+273.15);
}
float Temperature::get_FahrenToCenti()
{
	float cen = ((value - 32) * 5) / 9;
	return cen;
}
float Temperature::get_FahrenToKelvin()
{
	float cen = ((value - 32) * 5) / 9;
	float kelvin = cen + 273.15;
	return kelvin;
}
float Temperature::get_KelvinToCenti()
{
	return (273.15-value);
}
float Temperature::get_KelvinToFahren()
{
	float cen = value - 273.15;
	float fahren = ((cen * 9) / 5) + 32;
	return fahren;
}