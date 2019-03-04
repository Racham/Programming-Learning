#include <iostream>

using namespace std;

double trans(double, double, double);

int main()
{
	double d = 0, m = 0, s = 0, degree = 0;
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> d;
	cout << "Next, enter the minutes of arc: ";
	cin >> m;
	cout << "Finally, enter the seconds of arc: ";
	cin >> s;
	degree = trans(d, m, s);
	cout << d << " degrees, " << m << " minutes, " << s << " seconds = " << degree << " degrees." << endl;
	return 0;
}

double trans(double m, double n, double l)
{
	return (m + (n + l / 60) / 60);
}