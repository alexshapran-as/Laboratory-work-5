/*
Лабораторная работа №5
Алексей Шапран 
Группа: ИУ8-14
*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

double sum ( float a,  float b);
double sub ( float a,  float b);
double mult ( float a,  float b);
double div ( float a,  float b);
double pow ( float a );
double abs (float a);
double sq ( float a );

int main(int argc, char *argv[])
{
	float a = 0;
	float b = 0;

	setlocale(LC_ALL, "rus");
	
	if (argc < 3) 
	{
		cout << endl << "An error in the command line parameters is not enough to define the source data. Press any key to end..." << endl;
		_getch();
		return 1;
	}
	a = stod(argv[1]);
	b = stod(argv[2]);
	
	cout << endl << "a = " << a << endl << "b = " << b;

	cout << endl << "a + b = " << sum(a,b) << endl;
	cout << "a - b = " << sub(a,b) << endl;
	cout << "a * b = " << mult(a,b) << endl;
	cout << "a^4 = " << pow(a) << endl;
	if (a < 0) 
	{
		cout << "Error, wrong format of the first input parameter: the root of a negative number does not exist! Press any key..." << endl;
		_getch();
	}
		else cout << "sqrt(a) = " << sq(a) << endl;
	if (b == 0) 
	{
		cout << endl << "Error, wrong format of the second input parameter: it cannot be divided by zero! Press any key to end..." << endl;
		_getch();
		return 1;
	}
	cout << "a / b = " << div(a,b) << endl;

	cout << endl << endl << "Press any button to exit the program" << endl;
	_getch();
	return 0;
}

double sum ( float a,  float b)
{
	return a + b;
}
double sub ( float a,  float b)
{
	return a - b;
}
double mult ( float a,  float b)
{
	return a * b;
}
double div ( float a,  float b)
{
	return (float)a/b;
}
double pow ( float a )
{
	unsigned int extent = 4;
	float a2 = a;
	
	if ( extent != 0 ) 
	{
			for (int i = 1; i < extent; i++)
		{
			a = a * a2;
		}
	}
		else a = 1.0;
	
	return (double) a;
}
double abs (float a)
{
	if ( a >= 0 ) a = a; 
		else a = -a;

	return a;
}
double sq ( float a )
{
	float xn = 1.0;  
	float xn1 = 2.0;

	if ( a != 1 && a != 0 )
	{
		while ( (xn1 - xn) > 0.000001 || (xn1 - xn) < -0.000001  )
		{
		 xn = xn1;
		 xn1 = (float)(xn + (float)a/xn)/2;
		}

	}
		else if ( a == 1 ) xn1 = 1;
			else if ( a == 0 ) xn1 = 0;
				else cout << "error";


	return xn1;
}
