// structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



struct userSalary {
	double MonthlySalary;
	double YearSalary;
};


struct users {
	string name;
	int age;
	string city;
	string Country;
	userSalary Salary;
	char gender;
	int married;

};


int main()
{
	users user1;
	user1.name = "Omar Hazem";
	user1.age = 20;
	user1.city = "Cairo";
	user1.Country = "EGYPT";
	user1.gender = 'M';
	user1.Salary.MonthlySalary = 21000;
	user1.Salary.YearSalary = 200000;
	user1.married = 1;
	
	cout << "*********************************\n";
	cout << "Name: " << user1.name << endl;
	cout << "Age: " << user1.age << endl;
	cout << "City: " << user1.city << endl;
	cout << "Country: " << user1.Country << endl;
	cout << "gender: " << user1.gender << endl;
	cout << "MonthlySalary: " << user1.Salary.MonthlySalary << endl;
	cout << "YearSalary: " << user1.Salary.YearSalary << endl;
	cout << "married: " << user1.married << endl;
	cout << "*********************************\n";
}


