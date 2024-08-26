// If_Else.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	//Short and if-else 
	//variable = (condition) ? expressionTrue : expressionFalse;
	int time = 22;
	string result = (time < 18) ? "Good Day2!" : "Good Evening2!";

	if (time < 10)
		//false
	{
		cout << "Good Morning!" << endl;

	}
	//Both statements are false, so let's declare new statement. 
	else if (time < 20)
	{
		cout << "Good Day" << endl;
	}
	else//false
	{
		cout << "Good Evening!" << endl;
	}
	/*
	if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}*/
	cout << result << endl;
}