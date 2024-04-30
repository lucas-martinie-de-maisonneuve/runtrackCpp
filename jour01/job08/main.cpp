#include <iostream>
using namespace std;

int main()
{
    int annee;

    cout << "Entrez une annee : ";
    cin >> annee;

    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)){
        cout << annee << " est bissextile";}
    else{
        cout << annee << " n'est pas bissextile";}

    return 0;
}