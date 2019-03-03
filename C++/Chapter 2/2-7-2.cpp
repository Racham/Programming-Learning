#include <iostream>

int trans(int);

int main()
{
    using namespace std;
    int l = 0, n = 0;
    cout << "Please enter a distance and \"long\" as the unit." << endl;
    cout << "      long\b\b\b\b\b\b\b\b\b\b";
    cin >> l;
    n = trans(l);
    cout << n << " code" <<endl;
    return 0;
}

int trans(int i)
{
    return i*220;
}
