

#include <iostream>
using namespace std;
#include <string>

enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };

int main()
{
	cout << "******************************\n";
	cout << "Please Chose the number of your color?\n";
	cout << "(1) Red \n";
	cout << "(2) Blue \n";
	cout << "(3) Green \n";
	cout << "(4) Yellow \n";
	cout << "******************************\n\n";

	cout << "your Choice?";

	int c;
	enScreenColor Color;
	cin >> c;
	Color = (enScreenColor)c;


	//if (Color == enScreenColor::Red) {
	//	system("color 4f");
	//}
	//else if (Color == enScreenColor::Blue) {
	//	system("color 1f");
	//}
	//else if (Color == enScreenColor::Green) {
	//	system("color 2f");
	//}
	//else if (Color == enScreenColor::Yellow) {
	//	system("color 6f");
	//}
	//else {
	//	system("color 4f");
	//}
	switch (Color)
	{
	case enScreenColor::Red:
		system("color 4f");
		break;
	case enScreenColor::Blue:
		system("color 1f");
		break;
	case enScreenColor::Green:
		system("color 2f");
		break;
	case enScreenColor::Yellow:
		system("color 6f");
		break;
	default:
		system("color 4f");
		break;
	}
}


