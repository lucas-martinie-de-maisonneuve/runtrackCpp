#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int grand = a[0];
    int indice = 0;
    cout << "Veuillez entrez les 10 num\x82ros (un par un)" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << " num\x82ro : ";
        cin >> a[i];
    }

    for(int i = 0; i < 10; i++) {
        if (a[i] > grand) {
            grand = a[i];
            indice = i;
        }
    }
    cout << "Le plus grand \x82l\x82ments du tableau est \x85 l'indice " << indice;
    return 0;
}