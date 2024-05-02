#include <iostream>
using namespace std;

int main()
{
    int n, nb1 = 0, nb2 = 1, prochain = 0;

    do
    {
        cout << "Veuillez saisir la limite de la suite (> 2): ";
        cin >> n;
    } while (n < 2);
    cout << "Suite de Fibonacci: " << endl;

    cout << nb1 << ", " << nb2;

    while (prochain < n)
    {
        prochain = nb1 + nb2;
        if (prochain >= n)
            break;
        cout << ", "<<prochain;
        nb1 = nb2;
        nb2 = prochain;
    }
    return 0;
}
