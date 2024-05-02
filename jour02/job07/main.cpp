#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Veuillez entrez un entier : "; cin >> a;
    cout << "Veuillez entrez un second entier : "; cin >> b;

    for (a ; a <= b ; a++)
        cout << a << endl;
    return 0;
}