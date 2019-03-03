#include <iostream>

using namespace std;

double ctof(double);

int main()
{
    double celsius = 0, fahrenheit = 0;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    if(celsius < -273.15)
    {
        cout << "Celsius does not exist" << endl;
        return main();
    }
    else
    {
        fahrenheit = ctof(celsius);
    }
    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit" << endl;
    return 0;
}

double ctof(double n)
{
    return (1.8 * n + 32.0);
}
