#include <iostream>
using namespace std;

int main()
{
    int n, m, l;

    cout << "Entrez n : "; cin >> n;
    cout << "Entrez m : "; cin >> m;

    cout << "Avant:  n = " << n << ", m = " << m << endl;

    l = n;
    n = m;
    m = l;

    cout << "Apres: n = " << n << ", m = " << m << endl;

    return 0;
}
