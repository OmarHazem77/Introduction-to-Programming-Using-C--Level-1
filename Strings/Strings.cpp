// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>

int main()
{
	string st1, st2, st3; 
	cout << "please enter string 1" << endl;
	getline(cin, st1);
	cout << "please enter string 2?" << endl;
	cin >> st2;
	cout << "please enter string 3?" << endl;
	cin >> st3;
	cout << "*************************** " << endl;
	cout << "the lenght of string is  " << st1.length() << endl;
	cout << "charcter at 0 2 4 7 is  " << st1[0] << st1[2] << st1[4] << st1[7] << endl;
	cout << "concatinating string2 and string3 is   " << st3 + st2 << endl;
	int result = stoi(st2) * stoi(st3);
	cout << " st2 * st1 = " << result << endl;
	cout << "*************************** " << endl;


}


