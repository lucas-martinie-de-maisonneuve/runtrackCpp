#include <iostream>
using namespace std;

int main()
{
    int tab[5] = {1, 2, 3, 4, 5};
    cout << "Valeurs du tableau : " << endl;

    for (int &valeur : tab){
        cout << "["<<valeur << "] ";
    };

    return 0;
}