// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
	string aile[] = { "Aysel","Oktay","Omurcan","Umut" };
	cout << aile[0] << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << i << "=" << aile[i] << endl;
	}
	int myNumbers[5] = { 10, 20, 30, 40, 50 };
	for (int number : myNumbers) {
		number *= 2;
		cout << "New Number : " << number << endl;
	}// ------> I can use that function like that too (line 26)

	cout << sizeof(myNumbers) << endl;
	//Why did the result show 20 instead of 5, when the array contains 5 elements?
	//It is because the sizeof() operator returns the size of a type in bytes.

	cout << sizeof(myNumbers) / sizeof(int) << endl;
	for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
		cout << myNumbers[i] << endl;
	}


	//Multi Dimensional Arrays(Matrix)
	string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
	};

	cout << letters[1][3] << endl;

	cout << "---------" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << letters[i][j] << endl;
		}
	}
}