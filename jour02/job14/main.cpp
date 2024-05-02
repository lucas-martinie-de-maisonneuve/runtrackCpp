#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int somme, nombreReference = 0;

    cout << "Entrez un nombre : ";
    cin >> nombreReference;

    int nombre = nombreReference;
    int longeur = log10(nombreReference) + 1; 

    while (nombre != 0) {
        int reste = nombre % 10;
        somme = somme + pow(reste, longeur);
        nombre /= 10;
    }

    if (somme == nombreReference)
        cout << "Le nombre est narcissique";
    else
        cout << "Le nombre n'est pas narcissique";


    return 0;
}