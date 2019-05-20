//Create a C++ Program that store temperature of Province A, Province B and Province C for a week (seven days) and display it 

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, temp[3][7];

	cout << "Enter all temperature for a week of Province A, Province B and then Province C." << endl;

	for (x = 0; x <= 6; x++)
	{
		cout << "Province A, Day " << x + 1 << ":";
		cin >> temp[0][x];
	}

	for (x = 0; x <= 6; x++)
	{
		cout << "Province B, Day " << x + 1 << ":";
		cin >> temp[1][x];
	}

	for (x = 0; x <= 6; x++)
	{
		cout << "Province C, Day " << x + 1 << ":";
		cin >> temp[2][x];
	}

	cout << endl << "Displaying Values:" << endl;

	for (x = 0; x <= 6; x++)
	{
		cout << "Province A, Day " << x + 1 << "=" << temp[0][x] << endl;
	}

	for (x = 0; x <= 6; x++)
	{
		cout << "Province B, Day " << x + 1 << "=" << temp[1][x] << endl;
	}

	for (x = 0; x <= 6; x++)
	{
		cout << "Province C, Day " << x + 1 << "=" << temp[2][x] << endl;
	}

	_getch();
	return 0;

}