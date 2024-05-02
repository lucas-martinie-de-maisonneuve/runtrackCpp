#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Veuillez entrez un entier : "; cin >> a;
    cout << "Veuillez entrez un second entier : "; cin >> b;

    for (int i = a; i <= b ; i++)
        cout << i << endl;
    return 0;
}