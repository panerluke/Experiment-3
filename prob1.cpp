// Create a C++ program to show the smallest and largest integer, the total, and the average of an array  that take 10 elements only.


#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, smol, high, total, ave, val[10];

	cout << "Please input 10 values of integer: " << endl;

	for (x = 0; x <= 9; x++)
	{
		cin >> val[x];
	}

	 high = val[0];
	 smol = val[0];
	 total = 0;
	 ave = 0;

	for (x = 0; x <= 9; x++)
	{
		if (high <= val[x])
			high = val[x];
	}

	 for (x = 0; x <= 9; x++)
	 {
		 if (smol >= val[x])
			 smol = val[x];
	 }

	 for (x = 0; x <= 9; x++)
	 {
		 total += val[x];
	 }

	 for (x = 0; x <= 9; x++)
	 {
		 ave += val[x];
	 }

	 ave /= 10;

	 cout << endl << "The smallest integer among the input is: " << smol << endl
		 << "The largest integer among the input is: " << high << endl
		 << "The total value of the integers input is: " << total << endl
		 << "The average integer among the input is: " << ave << endl;

	_getch();
	return 0;

}