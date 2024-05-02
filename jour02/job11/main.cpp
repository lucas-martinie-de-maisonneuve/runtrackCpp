#include <iostream>
using namespace std;

int main()
{
    double total = 1, a;
    cout << "Veuillez entrer un entier : ";
    cin >> a;
    for (int i = 1; i <= a; i++)
        total *= i;
    cout << "La factorielle de "<< a << " est \x82gale \x85 : " << total;
    return 0;
}