#include <iostream>
using namespace std;

int main()
{
    string plateforme = "vive la plateforme !";
    string pltfrm = "";

    for (char &lettre : plateforme)
    {
        if (lettre != 'a' && lettre != 'e' && lettre != 'i' && lettre != 'o' && lettre != 'u' && lettre != 'y')
        {
            pltfrm += lettre;
        }
    }
    cout << pltfrm << endl;

    return 0;
}
