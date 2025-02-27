
#include <iostream>
#include<string>
using namespace std;
struct strInfo {
    string fname;
    string lname;
    int age;
    string Phone;
};
void readInfo(strInfo &Info) {
    cout << "enter your first name" << endl;
    cin >> Info.fname;
    cout << "enter your last name" << endl;
    cin >> Info.lname;
    cout << "enter your Age" << endl;
    cin >> Info.age;
    cout << "enter your Phone" << endl;
    cin >> Info.Phone;

}
void printInfo(strInfo Info) {
    cout << endl << "*******************************" << endl;
    cout << "Your First Name is :" << Info.fname <<endl;
    cout << "Your Last Name is  :" << Info.lname << endl;
    cout << "Your Age is        :" << Info.age << endl;
    cout << "Your phone is      :" << Info.Phone << endl;
    cout << endl << "*******************************" << endl;

}
void readPersonInfo(strInfo Persons[2]) {
    readInfo(Persons[0]);
    readInfo(Persons[1]);

}
void printPersonInfo(strInfo Persons[2]) {
    printInfo(Persons[0]);
    printInfo(Persons[1]);
}

int main()
{
    strInfo Persons[2];
    readPersonInfo(Persons);
    printPersonInfo(Persons);

}

