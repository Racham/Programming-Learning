#include <iostream>

using namespace std;

int agetomonth(int);

int main()
{
    int age=0;
    cout << "Enter your age: ";
    cin >> age;
    if(age<0||age>=125)
    {
        cout << "The age is unscientific, please enter again." << endl;
        return main();
    }
    else
    {
        cout << "You have lived for " << agetomonth(age) << " months" << endl;
    }
    return 0;
}

int agetomonth(int n)
{
    return 12*n;
}
