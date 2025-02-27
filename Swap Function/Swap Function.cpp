
#include <iostream>
using namespace std;
#include <string>

void Swap(int &A, int &B) {
    int Temp = A;
    A = B;
    B = Temp;
    cout << "after Swap A=" << A << ", B=" << B;
}
int main()
{
    int A, B;
    cout << "please enter A ? " << endl;
    cin >> A;
    cout << "please enter B ? " << endl;
    cin >> B;
    cout << "before swap A=" << A << ", B=" << B <<endl;
    Swap(A, B);
}


