#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Note {
    string nom;
    string prenom;
    float note;
};

void ajouterNote(vector<Note>& listeNotes) {
    Note nouvelleNote;
    cout << "Nom : ";
    cin >> nouvelleNote.nom;
    cout << "Prenom : ";
    cin >> nouvelleNote.prenom;
    cout << "Note : ";
    cin >> nouvelleNote.note;
    listeNotes.push_back(nouvelleNote);
    cout << "Note ajoutee" << endl;
}

void afficherListeNotes(const vector<Note>& listeNotes) {
    cout << "Liste des notes :" << endl;
    for (const auto& note : listeNotes) {
        cout << note.nom << " " << note.prenom << " --> " << note.note << endl;
    }
}

void supprimerNote(vector<Note>& listeNotes) {
    string nom, prenom;
    cout << "Nom de l'etudiant dont vous voulez supprimer la note : ";
    cin >> nom;
    cout << "Prenom de l'etudiant : ";
    cin >> prenom;

    for (auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
        if (it->nom == nom && it->prenom == prenom) {
            listeNotes.erase(it);
            cout << "Note supprimee avec succes." << endl;
            return;
        }
    }

    cout << "Aucune note trouvee pour cet etudiant." << endl;
}

void afficherMoyenne(const vector<Note>& listeNotes) {
    float somme = 0;
    for (const auto& note : listeNotes) {
        somme += note.note;
    }

    cout << "La moyenne des notes est : " << somme / listeNotes.size() << endl;
}

int main() {
    vector<Note> listeNotes;
    int choix;

    do {
        cout << endl <<"Menu :" << endl;
        cout << "1. Ajouter une note" << endl;
        cout << "2. Afficher la liste de notes" << endl;
        cout << "3. Supprimer une note d'un etudiant" << endl;
        cout << "4. Afficher la moyenne des notes" << endl;
        cout << "5. Quitter" << endl;
        cout << "Choix : ";
        cin >> choix;

        switch (choix) {
            case 1:
                ajouterNote(listeNotes);
                break;
            case 2:
                afficherListeNotes(listeNotes);
                break;
            case 3:
                supprimerNote(listeNotes);
                break;
            case 4:
                afficherMoyenne(listeNotes);
                break;
            case 5:
                cout << "Programme termine." << endl;
                break;
            default:
                cout << "Choix invalide. Veuillez reessayer." << endl;
        }
    } while (choix != 5);

    return 0;
}
