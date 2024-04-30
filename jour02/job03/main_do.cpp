#include <iostream>
using namespace std;

int main()
{
    int i, n, som;
    i = 0;
    som = 0;
    cout << "-- Avec un do/while --" << endl;
    do
    {
        cout << "Donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    } while (i < 4);
    cout << "Somme :" << som;
    return 0;
}
