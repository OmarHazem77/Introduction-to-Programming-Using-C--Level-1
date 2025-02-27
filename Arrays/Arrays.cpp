
  
#include <iostream>
#include<string>
using namespace std;
void readArrayData(int x[3]) {
    
    cout << "please enter Grade 1 ?" << endl;
    cin >> x[0];
    cout << "please enter Grade 2 ?" << endl;
    cin >> x[1];
    cout << "please enter Grade 3 ?" << endl;
    cin >> x[2];
}
void printArrayData(int x[3]) {
    cout << "the average of grades is " << (x[0] + x[1] + x[2]) / 3 << endl;
}
int main()
{
    int x[3];
    readArrayData(x);
    printArrayData(x);

}

