#include <iostream>
using namespace std;

int sommeTableau(int tableau[])
{
    int somme = 0;
    for (int i = 0; i < 10; i++)
    {
        if (tableau[i] % 2 == 0)
            somme = somme + tableau[i];
    }
    return somme;
}

int main()
{
    int S = 0;
    int tableau[10];
    cout << "Veuillez entrer les 10 nombres (un par un)" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << " nombre : ";
        cin >> tableau[i];
    }
    S = sommeTableau(tableau);

    cout << "La somme des \x82l\x82ments pairs du tableau est : " << S << endl;
    return 0;
}
