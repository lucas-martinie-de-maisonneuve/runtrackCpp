#include <iostream>
#include <cstring>

using namespace std;

bool compare(const char first[], const char second[]) {
    return strstr(second, first) != nullptr;
}

int main()
{
    bool retourne;
    char str[100];
    char str2[100];
    cout << "Entrez la premiere chaine : ";
    cin.getline(str, 100);
    cout << "Entrez la seconde chaine : ";
    cin.getline(str2, 100);
    retourne = compare(str, str2);
    if (retourne)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}