#include <iostream>

using namespace std;

int main()
{
	long long tn = 0, an = 0;
	cout << "Enter the world's population: ";
	cin >> tn;
	cout << "Enter the population of the US:";
	cin >> an;
	cout << "The population of the US is " << (long double)an * 100 / tn << "% of the world population." << endl;
	return 0;
}