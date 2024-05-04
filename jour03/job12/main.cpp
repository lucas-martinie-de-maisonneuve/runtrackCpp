#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int nb = rand() % 101;
    int tentative = 1, choix = 0;
    do
    {
        cout << "Tentative " << tentative << "/10 --> Veuillez entrer un nombre : ";
        cin >> choix;
        if (choix == nb)
        {
            cout << "Bravo, vous avez gagn\x82";
        }
        else
        {
            if (nb > choix)
                cout << "Le nombre a trouver est plus grand" << endl;
            else
                cout << "Le nombre a trouver est plus petit" << endl;
        }
        if (tentative == 10 && choix != nb)
            cout << "Vous avez perdu";
        tentative++;
    } while (tentative <= 10 && choix != nb);
    return 0;
}
