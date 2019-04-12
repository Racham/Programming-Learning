#include <iostream>
#include <string>
using namespace std;
struct CandyBar {
	string brand;
	double weight;
	int calories;
};
int main()
{
	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};
	cout << "snack's brand: " << snack.brand << endl;
	cout << "snack's weight: " << snack.weight << endl;
	cout << "snack's calories: " << snack.calories << endl;
	return 0;
}