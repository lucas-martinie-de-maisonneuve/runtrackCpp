#include <iostream>
using namespace std;

int main() {
    int nb;

    cout << "Entrez un nombre entier : ";
    cin >> nb;

    if (nb % 2 == 0) {
        cout << nb << " est pair";
    } else {
        cout << nb << " est impair";
    }

    return 0;
}
