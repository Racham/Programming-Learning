#include <iostream>

using namespace std;

double ltoa(double);

int main()
{
    double ly = 0, au = 0;
    cout << "Enter the number of light years: ";
    cin >> ly;
    if(ly < 0)
    {
        cout << "light years does not exist." << endl;
        return main();
    }
    else
    {
        au = ltoa(ly);
    }
    cout << ly << " light years = " << au << " astronomical units." << endl;
    return 0;
}

double ltoa(double n)
{
    return (63240*n);
}
