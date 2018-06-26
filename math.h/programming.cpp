#include <iostream>
#include "programming.h"
using namespace std;
programming::programming()
{
	value = 0;
}
programming::programming(int value_)
{
	value = value_;
}
programming::programming(programming &obj)
{
	value = obj.value;
}
void programming::set_value(int value_)
{
	value = value_;
}
int programming::get_value()
{
	return value;
}
programming::~programming()
{

}
int programming::get_DecimailToBinary(int obj)
{
	int val = obj;
	programming result;
	val = 0;
	int remainder, i = 1, step = 1;

	while (value != 0)
	{
		remainder = value % 2;
		value /= 2;
		val += remainder*i;
		i *= 10;
	}
	cout << "Binary value is " << val << endl;
	return val;
}
int programming::get_DecimailToOctal(int value)
{
	int val = value;
	programming result;
	val = 0;
	int remainder, i = 1, step = 1;

	while (value != 0)
	{
		remainder = value % 8;
		value /= 8;
		val += remainder*i;
		i *= 10;
	}
	cout << "Value in octal is " << val << endl;
	return val;
}
void invert(char *arr, int arrlength)
{
	for (int i = 0; i < (arrlength / 2); i++)
	{
		char temporary = arr[i];
		arr[i] = arr[(arrlength - 1) - i];
		arr[(arrlength - 1) - i] = temporary;
	}
	///cout << "the new arr order is " << endl;
	cout << "Value in hexabb decimal is : ";
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}
void programming::get_DecimailToHexa(int obj)
{

	int val = 0, val1 = 0;
//	cout << "Enter the value to convert to hexa: ";
	val = obj;
	int dig = 0;
	val1 = val;
	int count = 0;
	char* arr = new char[20];
	while (val1 != 0)
	{
		dig = val1 % 16;
		val1 = val1 / 16;
		if (dig >= 0 && dig <= 9)
		{
			arr[count] = dig + 48;
		}
		else
		{
			if (dig == 10)
			{
				arr[count] = 'A';
			}
			else if (dig == 11)
			{
				arr[count] = 'B';
			}
			else if (dig == 12)
			{
				arr[count] = 'C';
			}
			else if (dig == 13)
			{
				arr[count] = 'D';
			}
			else if (dig == 14)
			{
				arr[count] = 'E';
			}
			else if (dig == 15)
			{
				arr[count] = 'F';
			}
		}
		count++;
		arr[count] = NULL;
		//regrow(arr);
	}
	cout << endl;
	invert(arr, count);
	//programming  result;
	///return 0;
}
void programming::get_BinaryToDecimal(int value)
{
	int val = value;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;
	programming result;
	int temp = val;
	while (temp)
	{
		int last_digit = temp % 10;
		temp = temp / 10;
		dec_value += last_digit*base;
		base = base * 2;
	}
	cout << "Value in Decimal is " << dec_value << endl;
}
void programming::get_BinaryToOctal(int value)
{
	int val = value;
	int octalNumber = 0, decimalNumber = 0, i = 0;
	programming result;
	while (value != 0)
	{
		decimalNumber += (value % 10) * pow(2, i);
		++i;
		value /= 10;
	}

	i = 1;

	while (decimalNumber != 0)
	{
		octalNumber += (decimalNumber % 8) * i;
		decimalNumber /= 8;
		i *= 10;
	}
	cout << "Value in octal is " << octalNumber << endl;
}
void programming::get_BinaryToHexa(int value)
{
	int obj = value;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;
	programming result;
	int temp = obj;
	while (temp)
	{
		int last_digit = temp % 10;
		temp = temp / 10;
		dec_value += last_digit*base;
		base = base * 2;
	}
	////cout << "Value in hexa is " << dec_value << endl;
	int val = 0, val1 = 0;
	val = dec_value;
	int dig = 0;
	val1 = val;
	int count = 0;
	char* arr = new char[20];
	while (val1 != 0)
	{
		dig = val1 % 16;
		val1 = val1 / 16;
		if (dig >= 0 && dig <= 9)
		{
			arr[count] = dig + 48;
		}
		else
		{
			if (dig == 10)
			{
				arr[count] = 'A';
			}
			else if (dig == 11)
			{
				arr[count] = 'B';
			}
			else if (dig == 12)
			{
				arr[count] = 'C';
			}
			else if (dig == 13)
			{
				arr[count] = 'D';
			}
			else if (dig == 14)
			{
				arr[count] = 'E';
			}
			else if (dig == 15)
			{
				arr[count] = 'F';
			}
		}
		count++;
		arr[count] = NULL;
	}
	///cout <<"AAAss =  " << arr;
	cout << endl;
	invert(arr, count);  /////calling invert to reverse the array
}
void programming::get_OctalToBinary(int obj)
{
	int avalue = obj;
	int decimalNumber = 0, i = 0;
	long long binaryNumber = 0;

	while (value != 0)
	{
		decimalNumber += (value % 10) * pow(8, i);
		++i;
		value /= 10;
	}

	i = 1;

	while (decimalNumber != 0)
	{
		binaryNumber += (decimalNumber % 2) * i;
		decimalNumber /= 2;
		i *= 10;
	}
	cout << "Value in binary is " << binaryNumber << endl;
}
void programming::get_OctalToDecimal(int obj)
{
	int avalue = obj;
	int decimalNumber = 0, i = 0;
	long long OctalNumber = 0;

	while (value != 0)
	{
		decimalNumber += (value % 10) * pow(8, i);
		++i;
		value /= 10;
	}

	i = 1;

	while (decimalNumber != 0)
	{
		OctalNumber += (decimalNumber % 10) * i;
		decimalNumber /= 10;
		i *= 10;
	}
	cout << "Value in decimal is " << decimalNumber << endl;
}
void programming::get_OctalToHexa(int value)
{
	int a = value;
	int decimalNumber = 0, i = 0;
	long long OctalNumber = 0;

	while (value != 0)
	{
		decimalNumber += (value % 10) * pow(8, i);
		++i;
		value /= 10;
	}

	i = 1;

	while (decimalNumber != 0)
	{
		OctalNumber += (decimalNumber % 10) * i;
		decimalNumber /= 10;
		i *= 10;
	}
	programming result;
	result.value = OctalNumber;
	int val = 0, val1 = 0;
	val = OctalNumber;
	int dig = 0;
	val1 = val;
	int count = 0;
	char* arr = new char[20];
	while (val1 != 0)
	{
		dig = val1 % 16;
		val1 = val1 / 16;
		if (dig >= 0 && dig <= 9)
		{
			arr[count] = dig + 48;
		}
		else
		{
			if (dig == 10)
			{
				arr[count] = 'A';
			}
			else if (dig == 11)
			{
				arr[count] = 'B';
			}
			else if (dig == 12)
			{
				arr[count] = 'C';
			}
			else if (dig == 13)
			{
				arr[count] = 'D';
			}
			else if (dig == 14)
			{
				arr[count] = 'E';
			}
			else if (dig == 15)
			{
				arr[count] = 'F';
			}
		}
		count++;
		arr[count] = NULL;
	}
	///cout <<"AAAss =  " << arr;
	cout << endl;
	invert(arr, count);  /////calling invert to reverse the array
	///return result;
}
//int HexaDecimalToBinary(char *hexVal)
//{
//	
//	return a;
//}
void programming::get_HexaToBinary(char *value)
{
	int len = strlen(value);
	int base = 1;
	int dec_val = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (value[i] >= '0' && value[i] <= '9')
		{
			dec_val += (value[i] - 48)*base;
			base = base * 16;
		}
		else if (value[i] >= 'A' && value[i] <= 'F')
		{
			dec_val += (value[i] - 55)*base;
			base = base * 16;
		}
	}
	int a = dec_val;
	programming result;
	a = 0;
	int remainder, i = 1, step = 1;

	while (dec_val != 0)
	{
		remainder = dec_val % 2;
		dec_val /= 2;
		a += remainder*i;
		i *= 10;
	}

	dec_val = a;
	cout << "Value in Binary is " << a << endl;
	//HexaDecimalToBinary(obj);
}
void programming::get_HexaToDecimal(char *hexVal)
{
	int len = strlen(hexVal);
	int base = 1;
	int dec_val = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (hexVal[i] >= '0' && hexVal[i] <= '9')
		{
			dec_val += (hexVal[i] - 48)*base;
			base = base * 16;
		}
		else if (hexVal[i] >= 'A' && hexVal[i] <= 'F')
		{
			dec_val += (hexVal[i] - 55)*base;
			base = base * 16;
		}
	}
	cout << "Value in decimal " << dec_val << endl;

//	hexadecimalToDecimal(obj);
}
int find_hexadecimalToOctal(char *Hexa_val)
{
	int len = strlen(Hexa_val);
	int base = 1;
	int dec_val = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (Hexa_val[i] >= '0' && Hexa_val[i] <= '9')
		{
			dec_val += (Hexa_val[i] - 48)*base;
			base = base * 16;
		}
		else if (Hexa_val[i] >= 'A' && Hexa_val[i] <= 'F')
		{
			dec_val += (Hexa_val[i] - 55)*base;
			base = base * 16;
		}
	}
	int oct_val = dec_val;
	programming result;
	oct_val = 0;
	int remainder, i = 1, step = 1;

	while (dec_val != 0)
	{
		remainder = dec_val % 8;
		dec_val /= 8;
		oct_val += remainder*i;
		i *= 10;
	}
	dec_val = oct_val;
	cout << "Value in octal is " << oct_val << endl;
	return oct_val;
}
void programming::get_HexaToOctal(char *obj)
{
	find_hexadecimalToOctal(obj);
}
void programming::display()
{
	cout << "Value after conversion is " << value << endl;
}