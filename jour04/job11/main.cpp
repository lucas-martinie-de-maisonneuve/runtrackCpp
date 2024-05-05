#include <iostream>
#include <string>

using namespace std;

int main() {
    string fruits[] = {"Kiwi", "Banane", "Mandarine", "Mangue", "Ananas"};

    cout << "Fruits :" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << fruits[i] << " | ";
    }

    int nb;
    cout << endl <<"Nombre de fruits pr"<<char(130)<<"f\x82r\x82s ? ";
    cin >> nb;

    string *favoris = new string[nb];

    cout << "Entrez les " << nb << " fruits pr"<<char(130)<<"f\x82r\x82s :" << endl;
    for (int i = 0; i < nb; ++i) {
        cout << "Fruit " << i + 1 << ": ";
        cin >> favoris[i];
    }

    cout << "Contenu du tableau favoris :" << endl;
    for (int i = 0; i < nb; ++i) {
        cout << favoris[i] <<  " | ";
    }

    delete[] favoris;

    return 0;
}
