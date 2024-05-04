#include <iostream>
using namespace std;

int a = 10;
int b = 20;

int main()
{
    int *ptrA = &a, *ptrB = &b;
    int n = *ptrA;

    cout << "Avant l'"<<char(130)<<"change :" << endl << "a = " << a << ", b = " << b << endl;

    *ptrA = *ptrB;
    *ptrB = n;

    cout << "Apr\x8As l'"<<char(130)<<"change :" << endl << "a = " << a << ", b = " << b;
    return 0;
}