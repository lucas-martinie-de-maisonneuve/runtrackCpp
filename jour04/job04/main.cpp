#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2, c = 3;
    int *ptrA = &a, *ptrB = &b, *ptrC = &c;

    cout << "a  : " << a << " |b  : " << b << " |c  : " << c << endl;

    *ptrA = 7, *ptrB = 8, *ptrC = 9;

    cout << "a' : " << a << " |b' : " << b << " |c' : " << c << endl;

    return 0;
}
