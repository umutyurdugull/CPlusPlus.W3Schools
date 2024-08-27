// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

// Function declarations (prototypes)
void secondFunction();
void topla(int, int);
void DefFunction(string country = "Turkey");  // Updated declaration to include the default parameter
void myFunction(); // Declare myFunction
double ReturningFunction(double x, double y); // Overloaded function for double parameters
void ScopesFunction();
int SumAll(int);
void newFunc(string name, int age)
{
	//Note that when you are working with multiple parameters, the function call must have the same number of arguments as there are parameters, and the arguments must be passed in the same order.
	cout << "I'm " << name << ". I'm " << age << " years old." << endl;
}
void ArrayFunction(int numbers[2])
{
	for (int i = 0; i < 2; i++)
	{
		cout << numbers[i] << endl;

	}
}
int ReturningFunction(int x, int y)
{

	return x + y;
}

double x = 4.5;
double y = 5.3;
int main() {
	myFunction();
	secondFunction();
	topla(31, 69);
	DefFunction("Sweden");
	DefFunction();
	newFunc("Umut", 18);
	cout << ReturningFunction(3, 5) << endl;
	int numbers[] = { 1,2 };
	int numbers2[] = { 1,2,3 };
	ArrayFunction(numbers);
	ArrayFunction(numbers2);
	double sum = ReturningFunction(x, y);
	//It printed first 2 objects in array
	cout << "Double : " << sum << endl;
	ScopesFunction();


	cout << SumAll(10) << endl;
}

// Function definitions
void myFunction() {  // Declaration and definition of myFunction
	cout << "Hello World!" << endl;  // Function body
}

void secondFunction() {
	cout << "Hello Visual Studio!" << endl;
}

void topla(int sayi1, int sayi2) {
	int sum = sayi1 + sayi2;
	cout << sum << endl;
}

void DefFunction(string country) {
	cout << country << endl;
}

//Overloading Function
/*Instead of defining two functions that should do the same thing, it is better to overload one.

In the example below, we overload the plusFunc function to work for both int and double*/

double ReturningFunction(double x, double y)
{
	return x + y;
}
int a = 10;
int b = 20;
//SCOPES 
void ScopesFunction()
{//The principle known as "DON'T REPEAT YOURSELF" (DRY) in programming is best illustrated in the "scopes" section in C++. In this context, we can define our variables globally to avoid repetition and redundancy.

	int sum = a + b;
	cout << sum << endl;
}
//Recursion
int SumAll(int x) {
	if (x >0)
	{	
		return x + SumAll(x - 1);
	}
	else
	{
		return 0;
	}
}