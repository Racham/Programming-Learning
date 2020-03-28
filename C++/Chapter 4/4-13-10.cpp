#include <iostream>
#include <array>

using namespace std;

int main()
{
	double averagesc = 0;
	array<double, 3> score;

	cout << "Please enter your score of 40m running for 3 times, unit is second" << endl;

	for (int i = 0; i < 3; i++)
	{
		cin >> score[i];
	}

	averagesc = (score[0] + score[1] + score[2]) / 3;

	cout << "Your average score of these 3 times is " << averagesc << "s" << endl;

	return 0;
}