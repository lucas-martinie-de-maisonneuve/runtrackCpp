#include <iostream>

using namespace std;

int main()
{
    double resultat = 0;
    int n;
    cout << "Veuillez entrer un entier : "; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        resultat += (1.0 / i);
    };
    cout << "Le r\x82sultat de la somme de 1/1 jusqu'\x85 1/" << n << " est : " << resultat;
}