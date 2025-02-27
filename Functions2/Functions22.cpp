

#include <iostream>
using namespace std;
#include <string>
//procedures
void mySumFunction() {
    int num1, num2;
    cout << "pls enter number 1?"<<endl;
    cin >> num1;
    cout << "pls enter num2 ?" << endl;
    cin >> num2;
   int result = num1 + num2;
    cout << "num1 + num2 = " << result;
}
//function
int mySumFunction2() {
    int num1, num2;
    cout << "pls enter number 1?" << endl;
    cin >> num1;
    cout << "pls enter num2 ?" << endl;
    cin >> num2;
    int result = num1 + num2;
    return result ;
}
int main()
{
   // procedures
    mySumFunction();
    cout << endl << "***********************" << endl;
  // function 
    cout << "num1 + num2 = " << mySumFunction2();

}

