// Referances.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//A reference variable is a "reference" to an existing variable, and it is created with the & operator
	string food = "Lahmacun";
	string& meal = food;
	cout << meal << endl;

	//MEMORY ADDRESS
	/*
	Memory Address
In the example from the previous page, the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.

When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.

To access it, use the & operator, and the result will represent where the variable is stored:*/
	cout << &food << endl;

	//Pointers
	string text = "Hello World";
	string* pointer = &text;
	cout << pointer << endl;
}