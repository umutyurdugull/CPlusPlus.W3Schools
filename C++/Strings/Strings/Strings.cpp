// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string greetings = "Hello World!\n";
	cout << greetings;

	//Concat 
	string firstName = "Umut";
	string lastName = "Yurdugul";
	string fullName = firstName.append(lastName);
	cout << fullName << endl;
	/*WARNING!
	C++ uses the + operator for both addition and concatenation.
	Numbers are added. Strings are concatenated.
	*/

	string a = "10";
	string b = "20";
	cout << a << b << endl;
	//Output will be "1020"

	//Length
	cout << fullName.length() << endl;

	// Accesing String 
	string text = "QWERTYYUIOP";
	cout << text[text.length() - 1] << endl;
	//Length is 10 but it starts to count 0 from position of char. So when I want to write P i need to use that code block.

	string text2 = "Hello";
	text2[0] = 'P';
	cout << text2 << endl;
	//But in that string function it starts to count from 1 
	cout << text2.at(1) << endl;
	//Special Characters 
	/*\'	'	Single quote
	\"	"	Double quote
	\\	\	Backslash*/
	string name2;
	string surname2;
	cout << "Enter your name " << endl;
	cin >> name2;
	cout << "Enter your surname " << endl;
	cin >> surname2;
	cout << "Your name is : " + name2 << " " << surname2 << endl;
	//C-Style Strings 
	char greeting2[] = "Hello World!";
	/*
	Note: It is more convenient to work with the standard string type, rather than C-style strings. However, one reason some users continue to use C-style strings is that they have access to functions from the C standard library.
	*/
		
	return 0;
}