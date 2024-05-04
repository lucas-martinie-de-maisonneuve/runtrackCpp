#include <iostream>
#include <cstring>

using namespace std;

void compare(char first[], char second[]) {
    char * comparaison = strstr(first, second);
    if (comparaison != NULL) {
        cout << "La seconde phrase est incluse dans la premi\x8Are";
    } else {
        comparaison = strstr(second, first);
        if (comparaison != NULL) {
            cout << "La premi\x8Are phrase est incluse dans la seconde";
        } else {
            cout << "Aucune correspondance";
        }
    }
}

int main() {
    char str[100];
    char str2[100];
    cout << "Entrez la premi\x8Are chaine : "; cin.getline(str, 100); 
    cout << "Entrez la seconde chaine : "; cin.getline(str2, 100);
    compare(str, str2);
    return 0;
}
