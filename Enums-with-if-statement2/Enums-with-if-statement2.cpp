

#include <iostream>
using namespace std;
#include <string>

enum enCountryChoise {jordon = 1 , cairo = 2 , london = 3 , iraq = 4};
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
	if (country == enCountryChoise::jordon) {
		cout<<("your country is jordon\n\n");
	}
	else if (country == enCountryChoise::cairo) {
		cout << ("your country is cairo\n\n");
	}
	else if (country == enCountryChoise::london) {
		cout << ("your country is london\n\n");
	}
	else if (country == enCountryChoise::iraq) {
		cout << ("your country is iraq\n\n");
	}
	else {
		cout << ("your country is .......!\n\n");
	}
}

