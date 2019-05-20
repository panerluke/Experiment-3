//Create a C++ program which prints the letters in a char array in reverse order and shows the size of the array. 

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, y, n;
	char asd[2][100];

	cout << "Please input the characters to be printed reversed: ";
	cin >> asd[0];

	for (x = 0; asd[0][x] != '\0'; x++)
	{
		n = x;
	}
	
	y = n;
	asd[1][0] = asd[0][n];

	for (x = 0; x != n; x++, y--)
	{
		asd[1][y] = asd[0][x];
	}

	asd[1][n + 1] = '\0';

	cout << endl << "Result: " << asd[1] << endl << endl;
	cout << "The length of the array is: " << n + 1;

	_getch();
	return 0;

}