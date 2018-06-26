#include <iostream>
#include <Windows.h>
#include "BasicCalculaation.h"
#include "ScientificCalc.h"
#include "Matrix.h"
#include "Complex.h"
#include "Vector.h"
#include "programming.h"
#include "Temperature.h"
using namespace std;
int main()
{
	int value=0;
	float num, num2;
	double  real = 0, imaginary = 0;
	int choice;
	while (1)
	{
		cout << "\t\t**************************Welcome to math.h Liberary***************************" << endl;
		cout << "\t\t***********************Follow the following instructions***********************" << endl;
		cout << "->Press 1 for Basic Calculation " << endl;
		cout << "->Press 2 for Trignometric Calculation " << endl;
		cout << "->Press 3 for Scientific Calculation" << endl;
		cout << "->Press 4 for Complex Calculation " << endl;
		cout << "->Press 5 for Matrix Calculation " << endl;
		cout << "->Press 6 for programming Conversions " << endl;
		cout << "->Press 7 for Temperature Conversions " << endl;
		cout << "->Press 8 to exit this Library" << endl;
		cin >> choice;
		if (choice == 1)
		{
			system("cls");
			cout << "->Press 1 for Addition " << endl;
			cout << "->Press 2 for Subtraction " << endl;
			cout << "->Press 3 for Multiplication " << endl;
			cout << "->Press 4 for Division " << endl;
			cout << "->Press 5 to get Main Menu " << endl;
			int ch;
			cin >> ch;
			if (ch==1)
			{
				cout << "Enter two numbers for operation " << endl;
				cin >> num >> num2;
				BasicCalc c1(num, num2);
				cout << "Addition = " << c1.get_addition() << endl;
			}
			else if (ch == 2)
			{

				cout << "Enter two numbers for operation " << endl;
				cin >> num >> num2;
				BasicCalc c1(num, num2);
				cout << "Subtraction = " << c1.get_subtraction() << endl;
			}
			else if (ch == 3)
			{
				cout << "Enter two numbers for operation " << endl;
				cin >> num >> num2;
				BasicCalc c1(num, num2);
				cout << "Multiplication = " << c1.get_multiplication() << endl;
			}
			else if (ch == 4)
			{
				cout << "Enter two numbers for operation " << endl;
				cin >> num >> num2;
				BasicCalc c1(num, num2);
				cout << "Division = " << c1.get_division() << endl;
			}
			else if (ch==5)
			{
				system("cls");
			}
			else
			{
				cout << "\t\t\t\t\t Wrong Choice Entered -_-" << endl;
			}
		}
		else if (choice == 2)
		{
			system("cls");
			int ch;
			cout << "->Press 1 for sin function " << endl;
			cout << "->Press 2 for cos function " << endl;
			cout << "->Press 3 for tan function " << endl;
			cout << "->Press 4 for cosec function " << endl;
			cout << "->Press 4 for sec function " << endl;
			cout << "->Press 6 for cot function " << endl;
			cout << "->Press 7 to get Main Menu " << endl;
			cin >> ch;
			if (ch == 1)
			{
				cout << "Enter value of angle for sin function ";
				cin >> num;
				ScientificCalculator s1(num);
				cout << "Value of sin at angle = " << num << " is " << s1.get_sin() << endl;
			}
			else if (ch == 2)
			{
				cout << "Enter value of angle for cos function ";
				cin >> num;
				ScientificCalculator s1(num);
				cout << "Value of cos at angle = " << num << " is " << s1.get_cos() << endl;
			}
			else if (ch == 3)
			{
				cout << "Enter value of angle for tan function ";
				cin >> num;
				ScientificCalculator s1(num);
				cout << "Value of tan at angle = " << num << " is " << s1.get_tan() << endl;
			}
			else if (ch == 4)
			{
				cout << "Enter value of angle for sec function ";
				cin >> num;
				ScientificCalculator s1(num);
				cout << "Value of sin at angle = " << num << " is " << s1.get_cosec() << endl;
			}
			else if (ch == 5)
			{
				cout << "Enter value of angle for cosec function ";
				cin >> num;
				ScientificCalculator s1(num);
				cout << "Value of cos at angle = " << num << " is " << s1.get_sec() << endl;
			}
			else if (ch == 6)
			{
				cout << "Enter value of angle for cot function ";
				cin >> num;
				ScientificCalculator s1(num);
				cout << "Value of tan at angle = " << num << " is " << s1.get_cot() << endl;
			}
			else if (ch == 7)
			{
				system("cls");
			}
			else
			{
				cout << "Wrong Choice Entered -_-" << endl;
			}
		}
		else if (choice == 3)
		{
			system("cls");
			int ch;
			cout << "->Press 1 for factorial : " << endl;
			cout << "->Press 2 for power function" << endl;
			cout << "->Press 3 for Square function " << endl;
			cout << "->Press 4 for Cube function " << endl;
			cout << "->Press 5 for square root function " << endl;
			cout << "->Press 6 for cube root function " << endl;
			cout << "->Press 7 for logrithmetic function " << endl;
			cout << "->Press 8 for log base 2 function " << endl;
			cout << "->Press 9 to get Main Menu" << endl;
			cin >> ch;
			if (ch == 1)
			{
				cout << "Enter a number to get factorial" << endl;
				cin >> num;
				ScientificCalculator s1(num);
				cout << "Factorial of num is " << s1.get_factorial() << endl;
			}
			else if (ch == 2)
			{
				cout << "Enter base value : ";
				cin >> num;
				cout << "Enter Exponant value : ";
				cin >> num2;
				ScientificCalculator s1(num, num2);
				cout << "Your answer is " << s1.get_power() << endl;
			}
			else if (ch == 3)
			{
				cout << "Enter a number to get square : ";
				cin >> num;
				ScientificCalculator s1(num);
				cout << "Square of " << num << " is : " << s1.get_square() << endl;
			}
			else if (ch == 4)
			{
				cout << "Enter a number to get cube : ";
				cin >> num;
				ScientificCalculator s1(num);
				cout << "Cube of " << num << " is : " << s1.get_cube() << endl;
			}
			else if (ch == 5)
			{
				cout << "Enter a number to get square root : ";
				cin >> num;
				ScientificCalculator s1(num);
				cout << "Square root of " << num << " is : " << s1.get_SqRoot() << endl;
			}
			else if (ch == 6)
			{
				cout << "Enter a number to get cube root : ";
				cin >> num;
				ScientificCalculator s1(num);
				cout << "Cube root of " << num << " is : " << s1.get_CubeRoot() << endl;
			}
			else if (ch == 7)
			{
				cout << "Enter value for log function ";
				cin >> num;
				ScientificCalculator s1(num);
				cout << "Value of log at " << num << " is = " << s1.get_log() << endl;
			}
			else if (ch == 8)
			{
				cout << "Enter value for log function ";
				cin >> num;
				ScientificCalculator s1(num);
				cout << "Value of log at " << num << " is = " << s1.get_logBase2() << endl;
			}
			else if (ch == 9)
			{
				system("cls");
			}
			else
			{
				cout << "Wrong Choice Entered -_-" << endl;
			}
		}
		else if (choice == 4)
		{
			system("cls");
			int ch;
			cout << "->Press 1 for complex addition : " << endl;
			cout << "->Press 2 for complex subtraction : " << endl;
			cout << "->Press 3 for complex multiplication :" << endl;
			cout << "->Press 4 for complex division :" << endl;
			cout << "->Press 5 for complex Modulus" << endl;
			cout << "->Press 6 to get Main Menu" << endl;
			cin >> ch;
			if (ch == 1)
			{

				//char sign;
				cout << "Enter real number : ";
				cin >> real;
				cout << "Enter imaginary part : ";
				cin >> imaginary;
				cout << "First equation is " << real << " " << " + " << " " << imaginary << "i" << endl;
				complex obj1(real, imaginary);
				cout << "generate 2nd equation " << endl;
				cout << "enter real part : ";
				cin >> real;
				cout << "enter imaginary part : ";
				cin >> imaginary;
				cout << "2nd equation is " << real << " + " << imaginary << "i" << endl;
				complex obj2(real, imaginary);
				complex result;
				result = obj1.get_additionInComplex(obj1, obj2);
				result.display();
			}
			else if (ch == 2)
			{

				//				char sign;
				cout << "Enter real number : ";
				cin >> real;
				cout << "Enter imaginary part : ";
				cin >> imaginary;
				cout << "First equation is " << real << " " << " + " << " " << imaginary << "i" << endl;
				complex obj1(real, imaginary);
				cout << "generate 2nd equation " << endl;
				cout << "enter real part : ";
				cin >> real;
				cout << "enter imaginary part : ";
				cin >> imaginary;
				cout << "2nd equation is " << real << " " << " " << " " << imaginary << "i" << endl;
				complex obj2(real, imaginary);
				complex result;
				result = obj1.get_subtractionInComplex(obj1, obj2);
				result.display();
			}
			else if (ch == 3)
			{
				//				char sign;
				cout << "Enter real number : ";
				cin >> real;
				cout << "Enter imaginary part : ";
				cin >> imaginary;
				cout << "First equation is " << real << " " << " + " << " " << imaginary << "i" << endl;
				complex obj1(real, imaginary);
				cout << "generate 2nd equation " << endl;
				cout << "enter real part : ";
				cin >> real;
				cout << "enter imaginary part : ";
				cin >> imaginary;
				cout << "2nd equation is " << real << " " << " + " << " " << imaginary << "i" << endl;
				complex obj2(real, imaginary);
				complex result;
				result = obj1.get_multiplicationInComplex(obj1, obj2);
				result.display();

			}
			else if (ch == 4)
			{
				///				char sign;
				cout << "Enter real number : ";
				cin >> real;
				cout << "Enter imaginary part : ";
				cin >> imaginary;
				cout << "First equation is " << real << " " << " + " << " " << imaginary << "i" << endl;
				complex obj1(real, imaginary);
				cout << "generate 2nd equation " << endl;
				cout << "enter real part : ";
				cin >> real;
				cout << "enter imaginary part : ";
				cin >> imaginary;
				cout << "2nd equation is " << real << " " << " + " << " " << imaginary << "i" << endl;
				complex obj2(real, imaginary);
				complex result;
				result = obj1.get_divisionInComplex(obj1, obj2);
				result.display();
			}
			else if (ch == 5)
			{
				char sign;
				cout << "Enter real number : ";
				cin >> real;
				cout << "Enter sign + or - : ";
				cin >> sign;
				cout << "Enter imaginary part : ";
				cin >> imaginary;
				cout << "First equation is " << real << " " << sign << " " << imaginary << "i" << endl;
				complex obj1(real, imaginary);
				cout << "generate 2nd equation " << endl;
				cout << "enter real part : ";
				cin >> real;
				cout << "enter sign + or - : ";
				cin >> sign;
				cout << "enter imaginary part : ";
				cin >> imaginary;
				cout << "2nd equation is " << real << " " << sign << " " << imaginary << "i" << endl;
				complex obj2(real, imaginary);
				complex result;
				result = obj1.get_additionInComplex(obj1, obj2);
				result.display();
			}
			else if (ch == 5)
			{
				//				int opt;
				char sign;
				cout << "generate 1st equation " << endl;
				cout << "enter real part : ";
				cin >> real;
				cout << "enter sign + or - : ";
				cin >> sign;
				cout << "enter imaginary part : ";
				cin >> imaginary;
				cout << "Equation is " << real << " " << sign << " " << imaginary << "i" << endl;
				complex c1(real, imaginary);
				cout << "Modulus of equation is : " << c1.get_modulusInComplex() << endl;
			}
			else if (ch==6)
			{
				system("cls");
			}
			else
			{
				cout << "Wrong Choice Entered -_-" << endl;
			}
		}
		else if (choice == 5)
		{
			system("cls");
			int ch;
			cout << "->press 1 for matrix addition : " << endl;
			cout << "->press 2 for matrix subtraction " << endl;
			cout << "->press 3 for matrix multiplication " << endl;
			cout << "->press 4 for determinant in matrix " << endl;
			cout << "->Press 5 for the Transpose"<<endl;
			cout << "->Press 6 to get Main Menu" << endl;
			cin >> ch;
			if (ch == 1)
			{
				int x;
				int y;
				cout << "Enter size of rows of matrix :";
				cin >> x;
				int **arr;
				arr = new int*[x];
				cout << "Enter size of column of matrix :";
				cin >> y;
				int row, column;
				int **arr2;
				arr2 = new int*[x];

				cout << "Enter elements of 1st matrix" << endl;
					for (int i = 0; i < x; i++)
					{
						arr[i] = new int[y];
					}
					for (row = 0; row < x; row++)
					{
						for (column = 0; column < y; column++)
						{
							cin >> arr[row][column];

						}
					}
				cout << "Enter elements of 2nd matrix" << endl;
				for (int i = 0; i < x; i++)
				{
					arr2[i] = new int[y];
				}
				for (row = 0; row < x; row++)
				{
					for (column = 0; column < y; column++)
					{
						cin >> arr2[row][column];

					}
				}
				matrix obj1;
				cout << "1st matrix is " << endl;
				
				for (int a = 0; a < row; a++)
				{
					for (int b = 0; b < column; b++)
					{
						cout << arr[a][b] << " ";
					}
					cout << endl;
				}
				
				cout << "2nd matrix is " << endl;
				for (int a = 0; a < row; a++)
				{
					for (int b = 0; b < column; b++)
					{
						cout << arr2[a][b] << " ";
					}
					cout << endl;
				}

				obj1.get_additionOfMatrix(arr,arr2,x,y);
			}
			else if (ch == 2)
			{

				int x;
				int y;
				cout << "Enter size of rows of matrix :";
				cin >> x;
				int **arr;
				arr = new int*[x];
				cout << "Enter size of column of matrix :";
				cin >> y;
				int row, column;
				int **arr2;
				arr2 = new int*[x];

				cout << "Enter elements of 1st matrix" << endl;
				for (int i = 0; i < x; i++)
				{
					arr[i] = new int[y];
				}
				for (row = 0; row < x; row++)
				{
					for (column = 0; column < y; column++)
					{
						cin >> arr[row][column];

					}
				}
				cout << "Enter elements of 2nd matrix" << endl;
				for (int i = 0; i < x; i++)
				{
					arr2[i] = new int[y];
				}
				for (row = 0; row < x; row++)
				{
					for (column = 0; column < y; column++)
					{
						cin >> arr2[row][column];

					}
				}
				matrix obj1;
				cout << "1st matrix is " << endl;

				for (int a = 0; a < row; a++)
				{
					for (int b = 0; b < column; b++)
					{
						cout << arr[a][b] << " ";
					}
					cout << endl;
				}

				cout << "2nd matrix is " << endl;
				for (int a = 0; a < row; a++)
				{
					for (int b = 0; b < column; b++)
					{
						cout << arr2[a][b] << " ";
					}
					cout << endl;
				}

				obj1.get_subtractionOfMatrix(arr, arr2, x, y);
			}
			else if (ch == 3)
			{
				cout << "***->keep in mind that number of column of 1st matrix should be equal to number of rows of 2nd matrix<-***" << endl;
				int x;
				int y;
				cout << "Enter size of rows for 1st matrix :";
				cin >> x;
				int rmul1 = x;
				int **arr;
				arr = new int*[x];
				cout << "Enter number of column for 1st matrix :";
				cin >> y;
				int row2 = y;
				int cmul1 = y;
				int row, column;
				cout << "Enter elements of 1st matrix" << endl;
				for (int i = 0; i < x; i++)
				{
					arr[i] = new int[y];
				}
				for (row = 0; row < x; row++)
				{
					for (column = 0; column < y; column++)
					{
						cin >> arr[row][column];

					}
				}
				cout << "1st matrix is " << endl;
				int a = x;
				int b = y;
				for (a = 0; a < row; a++)
				{
					for (b = 0; b < column; b++)
					{
						cout << arr[a][b] << " ";
					}
					cout << endl;
				}
				x = row2;
				int **arr2;
				arr2 = new int*[x];
				int rmul2 = row2;
				cout << "Enter number of column for 2nd matrix :";
				cin >> y;
				int cmul2 = y;
				cout << "Enter elements of matrix 2nd matrix" << endl;
				for (int i = 0; i < x; i++)
				{
					arr2[i] = new int[y];
				}
				for (row = 0; row < x; row++)
				{
					for (column = 0; column < y; column++)
					{
						cin >> arr2[row][column];

					}
				}
				cout << "2nd matrix is " << endl;
				a = x;
				b = y;
				for (a = 0; a < row; a++)
				{
					for (b = 0; b < column; b++)
					{
						cout << arr2[a][b] << " ";
					}
					cout << endl;
				}
				matrix obj;
				obj.get_multiplicationOfMatrix(arr, arr2, rmul1, cmul1, cmul2);
			}
			else if (ch == 4)
			{
				cout << "***->keep in mind that number of column matrix should be equal to number of rows<-***" << endl;
				int x;
				int y;
				cout << "Enter size of rows and column ";
				cin >> x;
				int **arr;
				arr = new int*[x];
				y = x;
				int row, column;
				cout << "Enter elements of  matrix" << endl;
				for (int i = 0; i < x; i++)
				{
					arr[i] = new int[y];
				}
				for (row = 0; row < x; row++)
				{
					for (column = 0; column < y; column++)
					{
						cin >> arr[row][column];

					}
				}
				cout << "Matrix is " << endl;
				for (int a = 0; a < row; a++)
				{
					for (int b = 0; b < column; b++)
					{
						cout << arr[a][b] << " ";
					}
					cout << endl;
				}
				matrix obj;
				obj.get_determinantInMatrix(arr, x, y);
			}
			else if (ch == 5)
			{
				int x;
				int y;
				cout << "Enter size of rows ";
				cin >> x;
				int **arr;
				arr = new int*[x];
				cout << "Enter size of column ";
				cin >> y;
				int row, column;
				cout << "Enter elements of  matrix" << endl;
				for (int i = 0; i < x; i++)
				{
					arr[i] = new int[y];
				}
				for (row = 0; row < x; row++)
				{
					for (column = 0; column < y; column++)
					{
						cin >> arr[row][column];

					}
				}
				cout << "Matrix is " << endl;
				for (int a = 0; a < row; a++)
				{
					for (int b = 0; b < column; b++)
					{
						cout << arr[a][b] << " ";
					}
					cout << endl;
				}
				matrix obj;
				obj.get_transpose(arr, x, y);
			}
			else if (ch == 6)
			{
				system("cls");
			}
			else
			{
				cout << "Wrong Choice Entered -_-" << endl;
			}

		}

		else if (choice == 6)
		{
			system("cls");
			int choicep;
			cout << "\t\t***************************Welcome to programming calculator**************************" << endl;
			cout << "\t\t\t\t\tPress the key for following conversions " << endl;
			cout << "->Press 1 from decimal to other : " << endl;
			cout << "->Press 2 from binary to other : " << endl;
			cout << "->Press 3 from octal to other : " << endl;
			cout << "->Press 4 from hexa to other : " << endl;
			cout << "->Press 5 to get Main Menu" << endl;
			cin >> choicep;
			if (choicep == 1)
			{
				system("cls");
				int ch;
				cout << "->Press 1 for decimal to binary " << endl;
				cout << "->Press 2 for decimal to octal " << endl;
				cout << "->Press 3 for decimal to hexa " << endl;
				cout << "->Press 4 to get Main Menu" << endl;
				cin >> ch;
				if (ch == 1)
				{
					cout << "Enter a decimal value" << endl;
					cin >> value;
					programming p1(value);
					p1.get_DecimailToBinary(value);
					///result.display();
				}
				else if (ch == 2)
				{
					cout << "Enter a decimal value" << endl;
					cin >> value;
					programming p1(value);
					 p1.get_DecimailToOctal(value);
				}
				else if (ch == 3)
				{
					cout << "Enter a decimal value" << endl;
					int value;
					cin >> value;
					programming p1(value);
					p1.get_DecimailToHexa(value);
		//			result.display();
				}
				else if (ch == 4)
				{
					system("cls");
				}
			}
			else if (choicep == 2)
			{
				system("cls");
				//float value;
				int ch;
				cout << "->Press 1 for binary to decimal " << endl;
				cout << "->Press 2 for binary to octal " << endl;
				cout << "->Press 3 for binary to hexa " << endl;
				cout << "->Press 4 to get Main Menu" << endl;
				cin >> ch;
				if (ch == 1)
				{
					cout << "Enter a binary value" << endl;
					cin >> value;
					programming p1(value);
					p1.get_BinaryToDecimal(value);
				}
				else if (ch == 2)
				{
					cout << "Enter a binary value" << endl;
					cin >> value;
					programming p1(value);
					p1.get_BinaryToOctal(value);
				}
				else if (ch == 3)
				{
					//int value;
					cout << "Enter a binary value" << endl;
					cin >> value;
					programming p1(value);
					p1.get_BinaryToHexa(value);
				}
				else if (ch == 4)
				{
					system("cls");
				}
			}
			else if (choicep == 3)
			{
				system("cls");
				//				float value;
				int ch;
				cout << "->Press 1 for octal to decimal " << endl;
				cout << "->Press 2 for octal to binary " << endl;
				cout << "->Press 3 for octal to hexa " << endl;
				cout << "->Press 4 to get Main Menu" << endl;
				cin >> ch;
				if (ch == 1)
				{
					cout << "Enter a octal value" << endl;
					cin >> value;
					programming p1(value);
					p1.get_OctalToDecimal(value);
				}
				else if (ch == 2)
				{
					cout << "Enter a octal value" << endl;
					cin >> value;
					programming p1(value);
					p1.get_OctalToBinary(value);
				}
				else if (ch == 3)
				{
					cout << "Enter a octal value" << endl;
					cin >> value;
					programming p1(value);
					p1.get_OctalToHexa(value);
				}
				else if (ch == 4)
				{
					system("cls");
				}
			}
			else if (choicep == 4)
			{
				system("cls");
				int ch;
				cout << "->Press 1 for hexa to decimal " << endl;
				cout << "->Press 2 for hexa to binary " << endl;
				cout << "->Press 3 for hexa to octal " << endl;
				cout << "->Press 4 to get Main Menu" << endl;
				cin >> ch;
				if (ch == 1)
				{
					char *arr = NULL;
					arr = new char[30];
					cout << "Enter a hexa value" << endl;
					cin >> arr;
				programming p1;
				p1.get_HexaToDecimal(arr);
					///programming result;
				}
				else if (ch == 2)
				{
					char *arr = NULL;
					arr = new char[30];
					cout << "Enter a hexa value" << endl;
					cin >> arr;
					programming p1;
					p1.get_HexaToBinary(arr);
				}
				else if (ch == 3)
				{
					char *arr = NULL;
					arr = new char[30];
					cout << "Enter a hexa value" << endl;
					cin >> arr;
					programming p1;
					p1.get_HexaToOctal(arr);
				}
				else if (ch == 4)
				{
					system("cls");
				}
			}
			else if (choicep == 5)
			{
				system("cls");
			}
		}
		else if (choice == 7)
		{
			system("cls");
			int ch;
			cout << "->Press 1 for Centigrade to fahrenheit " << endl;
			cout << "->Press 2 for Centigrade to Kelvin " << endl;
			cout << "->Press 3 for Fahrenheit to Centigrade " << endl;
			cout << "->Press 4 for Fahrenheit to Kelvin " << endl;
			cout << "->Press 5 for Kelvin to Centigrade " << endl;
			cout << "->Press 6 for Kelvin to Fahrenheit " << endl;
			cout << "->Press 7 to get Main Menu" << endl;
			cin >> ch;
			if (ch == 1)
			{
				cout << "Enter value  ";
				cin >> num;
				Temperature T1(num);
				cout << "Value in Fahrenheit is = " << T1.get_CentiToFarhen() << endl;
			}
			else if (ch == 2)
			{
				cout << "Enter value  ";
				cin >> num;
				Temperature T1(num);
				cout << "Value in Kelvin is = " << T1.get_CentiToKelvin() << endl;
			}
			else if (ch == 3)
			{
				cout << "Enter value  ";
				cin >> num;
				Temperature T1(num);
				cout << "Value in Centigrade is = " << T1.get_FahrenToCenti() << endl;
			}
			else if (ch == 4)
			{
				cout << "Enter value  ";
				cin >> num;
				Temperature T1(num);
				cout << "Value in Kelvin is = " << T1.get_FahrenToKelvin() << endl;
			}
			else if (ch == 5)
			{
				cout << "Enter value  ";
				cin >> num;
				Temperature T1(num);
				cout << "Value in Centigrade is = " << T1.get_KelvinToCenti() << endl;
			}
			else if (ch == 6)
			{
				cout << "Enter value  ";
				cin >> num;
				Temperature T1(num);
				cout << "Value in Fahrenheit is = " << T1.get_KelvinToFahren() << endl;
			}
			else if (ch == 7)
			{
				system("cls");
			}
		}
		else if (choice == 8)
		{
			cout << "\t\t\t\t\t\tProgram is ending " << endl;
			cout <<endl<< "\t\t\t\t\t\tThank You" << endl;
			Sleep(2000);
			system("cls");
			break;
		}
		else

		{
			////cout << "\t\t\t\t\t Wrong Choice Entered -_-" << endl;
			cout  << "\t\t\t\t\t Kindly give the right input " << endl;
			Sleep(1000);
			system("cls");
		}
	}
}