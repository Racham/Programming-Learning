#include <iostream>
#include <string>
using namespace std;
struct Pisa {
	string name;
	double diameter;
	double weight;
};
int main()
{
	Pisa *nums = new Pisa;
	cout << "Enter Pisa's diameter: ";
	cin >> nums->diameter;
	cin.get();
	cout << "Enter Pisa's name: ";
	getline(cin, nums->name);
	cout << "Enter Pisa's weight: ";
	cin >> nums->weight;
	cout << "pisa's name: " << nums->name << endl;
	cout << "pisa's weight: " << nums->weight << endl;
	cout << "pisa's diameter: " << nums->diameter << endl;
	return 0;
}
