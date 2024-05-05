#include <iostream>
using namespace std;

int main()
{
    const char *tableau[4] = {"2019", "La Plateforme", "3.14", "Etudiants"};
    for (int i = 0; i < 4; ++i)
    {
        cout << "Adresse " << i << " : " << (void *)&tableau[i] << ", Valeur : " << tableau[i] << endl;
    }
    return 0;
}