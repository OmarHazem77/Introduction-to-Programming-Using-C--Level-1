// structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum gender {male , female};
enum ymarried {single , married};

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
	

};



int main()
{
	gender myGender;
	ymarried myMarried;
	users user1;
	user1.name = "Omar Hazem";
	user1.age = 20;
	user1.city = "Cairo";
	user1.Country = "EGYPT";
	myGender = gender::male;
	myMarried = ymarried::single;
	user1.Salary.MonthlySalary = 21000;
	user1.Salary.YearSalary = 200000;
	

	cout << "*********************************\n";
	cout << "Name: " << user1.name << endl;
	cout << "Age: " << user1.age << endl;
	cout << "City: " << user1.city << endl;
	cout << "Country: " << user1.Country << endl;
	cout << "Gender: " << (myGender == male ? "Male" : "Female") << endl;
	cout << "MonthlySalary: " << user1.Salary.MonthlySalary << endl;
	cout << "YearSalary: " << user1.Salary.YearSalary << endl;
	cout << "Married: " << (myMarried == single ? "Single" : "Married") << endl;
	cout << "*********************************\n";
}


