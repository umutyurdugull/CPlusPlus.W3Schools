// MathFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int x = 10;
	int y = 20;
	int z = 49;
	cout << max(x, z)<< endl;
	//Some math library examples
	cout << sqrt(z) << endl;

	//Square-Root Function
	for (int i = 0; i < z; i++)
	{
		if (i * i == z)
		{
			cout << i << endl;
		}
	}
	//We can use same in the cube-root too.
	//Log function :  natural logarithm of number
	cout << log(10) << endl;
	cout << log(100) << endl;
}
