#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a;
    do
    {
        cout << "Entrez un nombre positif : "; cin >> a;

        if (a < 0)
            cout << "Le nombre doit \x88tre positif" << endl;
        else if (a > 0 ){
            a = sqrt(a);
            cout << "Sa racine carr"<<char(130)<<"e est : " << a << endl;
        }
    } while (a != 0);
}