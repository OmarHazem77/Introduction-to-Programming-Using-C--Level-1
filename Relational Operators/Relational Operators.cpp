// Relational Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int firstNum;
	int secondnum;
	cout << " Please Enter the First Number ? " << endl;
	cin >> firstNum;
	cout << " Please Enter the second Number ? " << endl;
	cin >> secondnum;

	cout << (firstNum = secondnum) << endl;
	cout << (firstNum != secondnum) << endl;
	cout << (firstNum > secondnum) << endl;
	cout << (firstNum < secondnum) << endl;
	cout << (firstNum >= secondnum) << endl;
	cout << (firstNum <= secondnum) << endl;

}

