#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Staff {
    string nom;
    string prenom;
};

struct Etudiant {
    string nom;
    string prenom;
};

int main() {
    Staff membresStaff[2] = {
        {"Cordial", "Alicia"},
        {"Malardier", "Pierre"}
    };

    cout << "Pr\x82noms du staff : ";
    for (int i = 0; i < 2; ++i) {
        cout << membresStaff[i].prenom << " | ";
    }

    int nbEtu;
    cout << endl <<"Entrez le nombre d'\x82tudiants : ";
    cin >> nbEtu;

    vector<Etudiant> etudiants;

    for (int i = 0; i < nbEtu; ++i) {
        Etudiant etudiant;
        cout << "Nom " << i+1 << " : ";
        cin >> etudiant.nom;
        cout << "Pr\x82nom " << i+1 << " : ";
        cin >> etudiant.prenom;
        etudiants.push_back(etudiant);
    }

    cout << "Pr\x82noms des \x82tudiants : ";
    for (const Etudiant& etudiant : etudiants) {
        cout << etudiant.prenom << " | ";
    }

    return 0;
}
