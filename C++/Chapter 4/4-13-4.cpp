#include <iostream>
#include <string>
using namespace std;
int main()
{
	string fname, lname, name;
	cout << "Enter your first name: ";
	getline(cin, fname);
	cout << "Enter your last name: ";
	getline(cin, lname);
	name = fname + ", " + lname;
	cout << "Here's the information in a single string: " << name;
	return 0;
}