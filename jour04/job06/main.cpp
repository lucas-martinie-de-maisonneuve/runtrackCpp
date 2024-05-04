#include <iostream>
// #include <cstring>
using namespace std;

int main() {
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    string caractere = "La Plateforme";

    cout << "Adresse de la variable entier : " << &entier << ", Valeur : " << entier << endl;
    cout << "Adresse de la variable flottant : " << &flottant << ", Valeur : " << flottant << endl;
    cout << "Adresse de la variable reel : " << &reel << ", Valeur : " << reel << endl;
    cout << "Adresse de la variable caractere : " << &caractere << ", Valeur : " << caractere;

    return 0;
}
