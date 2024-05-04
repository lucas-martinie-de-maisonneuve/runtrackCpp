#include <iostream>
using namespace std;

bool valide(char t[])
{
    bool r = true;
    int heure, minute;
    if (t[0] < '0' || t[0] > '9')
        r = false;
    else if (t[1] < '0' || t[1] > '9')
        r = false;
    else if (t[3] < '0' || t[3] > '9')
        r = false;
    else if (t[4] < '0' || t[4] > '9')
        r = false;
    else if (t[2] != 'h')
        r = false;
    else if (t[5] != '\0')
        r = false;
    else
    {
        heure = (t[0] - '0') * 10 + (t[1] - '0');
        if (heure > 23)
            r = false;
        minute = (t[3] - '0') * 10 + (t[4] - '0');
        if (minute > 59)
            r = false;
    }

    return r;
}
int main()
{
    char a[20];
    do
    {
        cout << "Tapez une heure sous le format ..h.. : ";
        cin >> a;
        if (!valide(a))
            cout << "Format incorrect" << endl;
        else
            cout << "Format correct";

    } while (!valide(a));

    return 0;
}