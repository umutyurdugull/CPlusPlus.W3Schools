// ArrayRecap_Battleship.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	bool ships[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }
	};
	//We have 4 ships
	int hits = 0;
	int numberOfTurns = 0;
	while (hits < 4)
	{
		int row, column;
		cout << "Enter row between 0-3 : " << endl;
		cin >> row;
		cout << "Enter column between 0-3 : " << endl;
		cin >> column;
		//If that coordinates has been shot
		if (ships[row][column])
		{
			ships[row][column] = 0;
			//Remove that coordinates
			hits++;
			cout << "Hit! " << (4 - hits) << " left.\n\n";
		}
		else
		{
			cout << "You didn't hit anything! ";
		}
		numberOfTurns++;
	}
	cout << "Game has ended!" << endl;
	cout << "You played " << numberOfTurns << " turns!";

}
