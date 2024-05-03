#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char plateforme[] = "vive la plateforme !";
    char upper;

    for (int i = 0; i < strlen(plateforme); i++)
    {
        upper = toupper(plateforme[i]);
        cout << upper;
    }
    return 0;
}