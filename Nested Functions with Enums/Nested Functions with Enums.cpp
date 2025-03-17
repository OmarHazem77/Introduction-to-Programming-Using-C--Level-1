

#include <iostream>
using namespace std;
#include <string>

enum enWeekDay {  sun = 1 , mon = 2 , tues = 3 , wed = 4 , thu = 5 , fri = 6 };
void ShowWeekDay(){
	cout << "*****************************" << endl;
	cout << "          Week Days          " << endl;
	cout << "*****************************" << endl;
	cout << "1: Sunday" << endl;
	cout << "2: Monday" << endl;
	cout << "3: Tuesday" << endl;
	cout << "4: Wednesday" << endl;
	cout << "5: Thursday" << endl;
	cout << "6: Friday" << endl;
	cout << "*****************************" << endl;
    cout << "Please enter the number of day? "<< endl;

}
enWeekDay ReadWeekDay() {
	enWeekDay Weekday;
	int wd;
	cin >> wd;
	return (enWeekDay)wd;
}
string GetWeekdayname(enWeekDay Weekday) {
	switch (Weekday)
	{
	case enWeekDay::sun:
		return "sunday";
		break;
	case enWeekDay::mon:
		return "monday";
		break;
	case enWeekDay::tues:
		return "tuesday";
		break;
	case enWeekDay::wed:
		return "wednesday";
		break;
	case enWeekDay::thu:
		return "thursday";
		break;
	case enWeekDay::fri:
		return "friday";
		break;
	default:
		return "not a week day\n";
		break;
	}
}
int main()
{
	ShowWeekDay();
	cout << "today is : " << GetWeekdayname(ReadWeekDay()) << endl;
	return 0;
}

