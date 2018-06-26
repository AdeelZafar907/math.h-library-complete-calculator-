#pragma once
class programming
{
	int value;
public:
	programming();
	programming(int);
	programming(programming&);
	~programming();
	void set_value(int);
	int get_value();
	int get_DecimailToBinary(int);
	int get_DecimailToOctal(int);
	void get_DecimailToHexa(int);
	void get_BinaryToDecimal(int);
	void get_BinaryToOctal(int);
	void get_BinaryToHexa(int);
	void get_OctalToBinary(int);
	void get_OctalToDecimal(int);
	void get_OctalToHexa(int);
	void get_HexaToBinary(char*);
	void get_HexaToOctal(char*);
	void get_HexaToDecimal(char*);
	void display();
};