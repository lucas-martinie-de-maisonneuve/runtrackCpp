#include <iostream>
using namespace std;

int main() {
    long long nombre, nombreInverse = 0;

    cout << "Entrez un nombre : ";
    cin >> nombre;

    while (nombre != 0) {
        int reste = nombre % 10;
        nombreInverse = nombreInverse * 10 + reste;
        nombre /= 10;
    }

    cout << "Le nombre invers\x82 est : " << nombreInverse << endl;

    return 0;
}