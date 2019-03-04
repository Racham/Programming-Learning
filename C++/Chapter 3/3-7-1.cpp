#include <iostream>

using namespace std;

int ftin(int);

const int trans = 12;

int main()
{
    int h = 0;
    cout << "Enter your height: ______ in\b\b\b\b\b\b\b\b\b";
    cin >> h;
    cout << "Your height is ";
    ftin(h);
}

int ftin(int n)
{
    int i = 0, j = 0;
    i = n / trans;
    j = n % trans;
    cout << i << " ft " << j << " in." << endl;
    return 0;
}
