// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*Constructors
A constructor in C++ is a special method that is automatically called when an object of a class is created.

To create a constructor, use the same name as the class, followed by parentheses ()*/


class Person {
public:
	string firstName;
	string lastName;
	int id;
	int salary;
};
class CustomerManager : public Person {
public:
	void addCustomer();
	void getCustomer() {
		cout << firstName + " " + lastName << endl;
	}
};
//// Method/function definition outside the class
void CustomerManager::addCustomer() {
	cout << "Customer Added!" << endl;
}
/*Why And When To Use "Inheritance"?
- It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.*/
//Encapsulation 
/*The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.
*/
class EmplooyeManager : public Person {
private:
public :
	string department;
	void SetSalary(int s)
	{
		salary = s;
	}
	int GetSalary() {
		return salary;
	}
};
class Manager  : public EmplooyeManager{

	
};
class Vehicle {
public :
	string brand;
	void Honk() {
		cout << "HONK HONK!" << endl;
	};
};

class VolvoCar : public Vehicle
{
public :
	string model = "Truck";
};
int main()
{
	VolvoCar car;
	car.Honk();
	EmplooyeManager emplooye;
	emplooye.SetSalary(5000);
	cout << emplooye.GetSalary() << endl;
	CustomerManager customer;
	customer.id = 1;
	customer.firstName = "Umut";
	customer.lastName = "Yurdugul";
	customer.getCustomer();
	customer.addCustomer();
	Manager manager;
	manager.department = "CTO";
}