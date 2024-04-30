#include <iostream>
using namespace std;

int main()
{
    printf("");

    int n, total = 0;
    cout << "\nVeuillez entrer un entier sup\x82rieur ou \x82gal \x85 5 : ";
    cin >> n;

    if (n < 5)
    {
        cout << "L'entier doit \x88tre sup\x82rieur ou \x82gal \x85 5.";
        return 1;
    }

    for (int i = 5; i <= n; i++)
    {
        total += i * i * i;
    }

    cout << "\nLa somme de 5^3 \x85 " << n << "^3 est \x82gale \x85 " << total;
    return 0;
}
