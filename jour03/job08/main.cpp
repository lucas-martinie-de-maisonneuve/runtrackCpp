#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char tab[101];
    cout << "Entrez une chaine de caracteres : ";
    cin.getline(tab, 100);
    
    tab[strlen(tab)] = '\0';
    cout << "Contenu du tableau : " << tab << endl;
    cout << "Caractere de fin de chaine : " << tab[strlen(tab)] << endl;

    return 0;
}
