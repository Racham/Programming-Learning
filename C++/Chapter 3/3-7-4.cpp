#include <iostream>

using namespace std;

int main()
{
	long long sc = 0, d = 0, h = 0, m = 0, s = 0;
	cout << "Enter a number of seconds: ";
	cin >> sc;
	d = sc / 86400;
	h = (sc % 86400) / 3600;
	m = ((sc % 86400) % 3600) / 60;
	s = (((sc % 86400) % 3600) % 60);
	cout << sc << " seconds = " << d << " days, " << h << " hours, " << m << " minutes, " << s << " seconds." << endl;
	return 0;
}
