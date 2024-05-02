#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int produits[11][11];

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            produits[i][j] = i * j;
        }
    }

    cout << "   |";
    for (int i = 1; i <= 10; i++)
        cout << setw(3) << i << " ";
    cout << endl <<setw(45) << setfill('-') << ' ' << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << setw(2) << setfill(' ') << i << " |";
        for (int j = 1; j <= 10; j++)
        {
            cout << setw(3) << produits[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
