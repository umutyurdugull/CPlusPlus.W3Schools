// FileManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include<string>
using namespace std;
class StudentManager {
public: int id;
	  string firstName;
	  string lastName;
};
void AddStudent() {
	StudentManager student;
	int id = student.id = 1;
	student.firstName = "Umut";
	student.lastName = "Yurdugul";
	string studentData = student.firstName + " " + student.lastName;
	string fileName = to_string(student.id) + ".txt";
	ofstream FileOpener(fileName);
	FileOpener << studentData;
	FileOpener.close();
	cout << "Student Added!";
}
int main()
{	
	AddStudent();

}