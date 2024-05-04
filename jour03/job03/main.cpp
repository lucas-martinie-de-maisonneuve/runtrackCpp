#include <iostream>
#include <cstring>

using namespace std;

int comparerChaines(const char *chaine1, const char *chaine2)
{
    if (strcmp(chaine1, chaine2) == 0)
        return 0;
    else
        return 1;
}

int main()
{
    const char *chaine1 = "Bonjour";
    const char *chaine2 = "Bonjour";
    const char *chaine3 = "Bonjourrr";

    cout << "Comparaison de " << chaine1 <<" et " << chaine2 << " : "<< comparerChaines(chaine1, chaine2) << endl;
    cout << "Comparaison de " << chaine2 <<" et " << chaine3 << " : "<< comparerChaines(chaine2, chaine3) << endl;

    return 0;
}