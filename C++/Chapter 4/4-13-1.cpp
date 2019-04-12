#include <iostream>
#define N 20
using namespace std;
int main()
{
	char fname[N], lname[N], grade;
	int age;
	cout << "What is your first name: ";
	cin.get(fname, N).get();
	cout << "What is your last name: ";
	cin.get(lname, N).get();
	cout << "What letter grade do you deserve: ";
	cin >> grade;
	cout << "What is your age:";
	cin >> age;
	cout << "Name: " << fname << " " << lname << endl;
	grade = grade + 1;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;
	return 0;
}