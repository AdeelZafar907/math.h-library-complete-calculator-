#pragma once
class Temperature
{
	float value;
public:
	void set_value(float);
	float get_value();
	float get_CentiToFarhen();
	float get_CentiToKelvin();
	float get_FahrenToCenti();
	float get_FahrenToKelvin();
	float get_KelvinToCenti();
	float get_KelvinToFahren();
	Temperature(float = 0);
	~Temperature();
};