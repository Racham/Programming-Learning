#include <iostream>

using namespace std;

int main()
{
	double Lkm = 0, galmi = 0;
	cout << "100-kilometer fuel consumption: ";
	cin >> Lkm;
	galmi = 235.215*Lkm;
	cout << Lkm << " L/100km = " << galmi << " mpg(us)." << endl;
	return 0;
}