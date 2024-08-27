// Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main()
{
    struct Student
    {
        int studentId;
        string firstName;
        string lastName;
        string getFullName()
        {
            return firstName + " " + lastName;
        }

    };

    Student student;
    student.firstName = "Umut";
    student.lastName = "Yurdugul";
    student.studentId = 241213017;
    string fullName = student.getFullName();
    int number = student.studentId;

    cout << fullName << " " << number << endl;

    return 0;
}
