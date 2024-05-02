#include <iostream>
using namespace std;

int main()
{
    float moyenne, somme;

    for (int i = 0; i < 5; i++)
    {
        cout << "Entrez une note : ";
        cin >> moyenne;
        somme += moyenne;
    }
    moyenne = somme / 5;
    cout << "La moyenne est de : " << moyenne;
    return 0;
}