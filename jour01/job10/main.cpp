#include <iostream>
using namespace std;

int main()
{
    string produit;
    float prix, kilo, prixTTC;

    cout << "Veuillez entrez le nom du produit : ";
    cin >> produit;
    cout << "Entrez le prix HT (en Euro) de 1kg de " << produit << " --> ";
    cin >> prix;
    cout << "Entrez le poids (en kg) de " << produit << " --> ";
    cin >> kilo;
    prixTTC = prix * 1.15 * kilo;
    cout << "Le prix TTC de " << kilo << "kg de " << produit << " est de " << prixTTC << " Euro";
    return 0;
}