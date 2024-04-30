#include <iostream>
using namespace std;

int main()
{
    int a, b, c, i = 0;
    cout << "Veuillez Entrez 3 nombres \n Nombre 1 : "; cin >> a;
    cout << " Nombre 2 : "; cin >> b;
    cout << " Nombre 3 : "; cin >> c;

    if (b < a && c < a)
        cout << "Le plus grand est : " << a;
    else if (a < b && c < b)
        cout << "Le plus grand est : " << b;
    else
        cout << "Le plus grand est : " << c;

    return 0;
}