#include <iostream>
using namespace std;

int main()
{
    int i, n, som;
    i = 0;
    som = 0;

    while (i < 4)
    {
        cout << "Donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    };
    cout << "Somme :" << som;
    return 0;
}
