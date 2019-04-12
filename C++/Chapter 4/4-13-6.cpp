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
	CandyBar snack[3];
	snack[0] = {
		"Big White Rabbit",
		20.36,
		500
	};
	snack[1] = {
		"Coockie",
		13.2,
		98
	};
	snack[2] = {
		"Flash Fly",
		25.36,
		430
	};
	for (int i = 0; i < 3; i++) {
		cout << i+1 << endl;
		cout << "snack's brand: " << snack[i].brand << endl;
		cout << "snack's weight: " << snack[i].weight << endl;
		cout << "snack's calories: " << snack[i].calories << endl;
	}
	return 0;
}