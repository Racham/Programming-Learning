#include <iostream>

using namespace std;

void time(int, int);

int main()
{
    int h = 0, m = 0;
    cout << "Enter the number of hours: ";
    cin >> h;
    cout << "Enter the number of minutes: ";
    cin >> m;
    cout << "Time: ";
    time(h, m);
}

void time(int i, int n)
{
    cout << i << ":" << n << endl;
}
