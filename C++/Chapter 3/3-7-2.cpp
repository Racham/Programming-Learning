#include <iostream>

using namespace std;

double intom(double, double);
double lbtokg(double);
double bmi(double, double);

int main()
{
	double i = 0, j = 0, k = 0;
	cout << "Please enter your foot of height: ";
	cin >> i;
	cout << "Please enter your inch of height: ";
	cin >> j;
	cout << "Please enter your weight (lb): ";
	cin >> k;
	cout << "Your BMI is: " << bmi(lbtokg(k), intom(i, j)) << endl;
	return 0;
}

double intom(double m, double n)
{
	return ((m * 12 + n)*0.0254);
}

double lbtokg(double l)
{
	return (l / 2.2);
}

double bmi(double x, double y)
{
	return ((x / y)*(x / y));
}