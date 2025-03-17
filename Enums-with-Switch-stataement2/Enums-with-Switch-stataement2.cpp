

#include <iostream>
using namespace std;
#include <string>

enum enCountryChoise { jordon = 1, cairo = 2, london = 3, iraq = 4 };
int main()
{
	cout << "******************************\n";
	cout << "Please Chose the number of your color?\n";
	cout << "(1) jordon \n";
	cout << "(2) cairo \n";
	cout << "(3) london \n";
	cout << "(4) iraq \n";
	cout << "******************************\n\n";

	cout << "your Choice?\n\n";

	int c;
	enCountryChoise country;
	cin >> c;
	country = (enCountryChoise)c;

	switch (country)
	{
	case enCountryChoise::jordon:
		cout << ("your country is jordon\n\n");
		break;
	case enCountryChoise::cairo:
		cout << ("your country is cairo\n\n");
		break;
	case enCountryChoise::london:
		cout << ("your country is london\n\n");
		break;
	case  enCountryChoise::iraq:
		cout << ("your country is iraq\n\n");
		break;
	default:
		cout << ("your country is cairo\n\n");
		break;
	}
}

