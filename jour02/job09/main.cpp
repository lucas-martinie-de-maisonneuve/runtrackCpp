#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    do
    {
        cout << "Entrez la borne a : "; cin >> a;
        cout << "Entrez la borne b : "; cin >> b;
        if (a >= b)
            cout << "b doit \x88tre sup\x82rieur \x85 a" << endl;
    } while (a >= b);

    cout << "Entrez un entier : ";
    cin >> c;

    if (c >= a && c <= b){
        cout << "GAGNE" << endl;
    }
    else{
        cout << "PERDU" << endl;
    }

    return 0;
}
