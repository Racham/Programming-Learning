#include <iostream>

using namespace std;


int main()
{
	double mi = 0, gal = 0;
	cout << "Enter the mileage of your car: ";
	cin >> mi;
	cout << "Enter the amount of gasoline: ";
	cin >> gal;
	cout << "100-kilometer fuel consumption is " << (3.79*gal) / (100 * 1.6*mi) << " L/100km." << endl;
	return 0;
}