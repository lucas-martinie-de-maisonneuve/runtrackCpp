#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[255], rev[255];
    int i, j = 0, longeur = 0;

    cout << "Chaine = ";
    cin.getline(str, 255);

    longeur = strlen(str);

    for (i = longeur - 1; i >= 0; i--)
    {
        rev[j++] = str[i];
    }
    rev[j] = '\0';
    cout << " Cha\x8Cne invers\x82 = " << rev;

    return 0;
}
