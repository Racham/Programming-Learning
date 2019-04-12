#include <iostream>
#include <cstring>
#define N 40
using namespace std;
int main()
{
	char fname[N], lname[N];
	cout << "Enter your first name: ";
	cin.get(fname, N).get();
	cout << "Enter your last name: ";
	cin.get(lname, N).get();
	strcat_s(fname, ", ");
	strcat_s(fname, lname);
	cout << "Here's the information in a single string: " << fname;
	return 0;
}