#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int i;
    int compteur = 0;
    cout << "Veuillez entrez les 10 num\x82ros (un par un)" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << i + 1 << " num\x82ro : ";
        cin >> a[i];
    }

    for(i = 0; i < 10; i++) {
        if (a[i] >= 5) {
            compteur++;
        }
    }
    cout << "Il y a " << compteur << " \x82l\x82ments sup\x82rieur \x85 5";
}