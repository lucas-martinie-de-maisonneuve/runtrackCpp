#include <iostream>
using namespace std;

int main() {
    int taille;

    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    int* tableau = new int[taille];

    cout << "Entrez les " << taille << " entiers :" <<endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Element " << i << " : ";
        cin >> tableau[i];
    }

    cout << "Contenu du tableau :\n";
    for (int i = 0; i < taille; ++i) {
        cout << "[" << tableau[i] << "], ";
    }

    delete[] tableau;

    return 0;
}
