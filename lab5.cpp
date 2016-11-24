/*
Домашняя работа №5
Алексей Шапран 
Группа: ИУ8-14
*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

double div ( float a,  float b);

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
	
	if (b == 0) 
	{
		cout << endl << "Error, wrong format of the second input parameter. Press any key to end..." << endl;
		_getch();
		return 1;
	}
	cout << endl << "a = " << a << endl << "b = " << b;

	cout << endl << "a / b = " << div(a,b) << endl;
	cout << endl << endl << "Press any button to exit the program" << endl;
	_getch();
	return 0;
}

double div ( float a,  float b)
{
	return (float)a / b;
}