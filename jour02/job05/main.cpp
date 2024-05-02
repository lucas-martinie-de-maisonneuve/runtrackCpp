#include <iostream>
using namespace std;

int main(void)
{
    float note;
    do
    {
        cout << "Veuillez entrer votre note : ";
        cin >> note;

        if (note >= 0 && note < 10)
            cout << "Non valid\202";
        else if (note >= 10 && note <= 20)
            cout << "Valid\202";
        else
            cout << "La note doit \x88tre comprise entre 0 et 20" << endl;

    } while (note < 0 || note > 20);
    return 0;
}
