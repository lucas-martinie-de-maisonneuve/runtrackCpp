#include <iostream>
using namespace std;

int main() {
    char tableau[] = {9, 28, 12, 25, 12, 93};

    for (int i = 0; i < 6;  ++i) {
        cout << "Adresse " << i << " : " << static_cast<void*>(&tableau[i]) << " - Valeur : " << static_cast<int>(tableau[i]) << endl;
    }

    return 0;
}
