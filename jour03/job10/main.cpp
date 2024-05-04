#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char string[20];
    char string2[20] = "Bonjour";
    cout << "Tapez une cha\x8Cne : ";
    cin >> string;
    if (strcmp(string, string2) > 0)
        cout <<"Ordre lexicographique : " << string2 <<" "<< string;
    else
        cout <<"Ordre lexicographique : " << string <<" "<< string2;
    return 0;
}