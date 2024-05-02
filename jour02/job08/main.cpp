#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Veuillez entrez un entier : "; cin >> a;
    cout << "Veuillez entrez un second entier : "; cin >> b;

    while (a <= b){
        cout << a << endl;
        a++;
    }
    return 0;
}