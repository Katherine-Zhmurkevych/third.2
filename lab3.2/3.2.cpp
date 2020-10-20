// Lab_03_2.cpp
// < Жмуркевич Катерина >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 8
#include <iostream>
using namespace std;
int main()
{
	double x; 
	double a; 
	double b; 
	double c; 
	double F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;	if (c < 0 && a != 0)		F = -a * x * x;	if (c > 0 && a == 0)		F = ((a - x) / c * x);	if (!(c < 0 && a != 0) && !(c > 0 && a == 0))		F = 1.0 + x / c;	cout << endl;
	cout << "1) F = " << F << endl;//перший спосіб

	if (c < 0 && a != 0)		F = -a * x * x;
	else
		if (c > 0 && a == 0)			F = ((a - x) / c * x);
		else 
			F = 1.0 + x / c; 
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}
