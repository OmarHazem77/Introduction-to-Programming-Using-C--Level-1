// input.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string name ;
	int age ;
	string city ;
	string Country ;
	double MonthlySalary ;
	double YearSalary ;
	char gender ;
	int married ;

	cout << "enter your name?"<< endl ;
	cin >> name;
	cout << "enter your age?" << endl;
	cin >> age;
	cout << "enter your city?" << endl;
	cin >> city;
	cout << "enter your Country?" << endl;
	cin >> Country;
	cout << "enter your MonthlySalary?" << endl;
	cin >> MonthlySalary;
	cout << "enter your YearSalary?" << endl;
	cin >> YearSalary;
	cout << "enter your gender?" << endl;
	cin >> gender;
	cout << "enter your married?" << endl;
	cin >> married;

	cout << "***********************\n";
	cout << "Name:" << name << "\n";
	cout << "Age :" << age << "\n";
	cout << "City:" << city << "\n";
	cout << "Country:" << Country << "\n";
	cout << "MonthlySalary:" << MonthlySalary << "\n";
	cout << "YearSalary:" << YearSalary << "\n";
	cout << "Gender:" << gender << "\n";
	cout << "Married:" << married << "\n";
	cout << "***********************\n";
	//---------------------------------------------------------------------------------
	int x;
	int y;
	int z;
	cout << "enter your firstNumber?" << endl;
	cin >> x;
	cout << "enter your secondNumber?" << endl;
	cin >> y;
	cout << "enter your thirdNumber?" << endl;
	cin >> z;

	cout << x + y + z << endl;
	//---------------------------------------------------------------------------------
	int Age;
	cout << "Enter Your Age?" << endl;
	cin >> Age;
	cout << "after 5 year you will be " << Age + 5 << " year old";
}

