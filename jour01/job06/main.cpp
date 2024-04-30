#include <iostream>
using namespace std;

int main() {
    int multiplication;

    cout << "Entrez un entier : ";
    cin >> multiplication;

    cout << "Table de multiplication de " << multiplication << " : " << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << multiplication << " x " << i << " = " << (multiplication * i) << endl;
    }
    return 0;
}
