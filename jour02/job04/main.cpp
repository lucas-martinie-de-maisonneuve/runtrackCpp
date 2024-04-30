#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{
    char operateur;
    float total = 0, num1, num2;
    string operation;

    cout << "Veuillez entrer une "<<char(130)<<"ration (format a+b | a-b | a/b | a*b)" << endl << "         ";
    cin >> operation;

    stringstream ss(operation);

    ss >> num1;

    ss >> operateur;

    ss >> num2;

    if (operateur == '/' && num2 == 0) {
        cout << "Division par z"<<char(130)<<"ro impossible" << endl;
        return 1;
    }

    switch (operateur) {
        case '+':
            total = num1 + num2;
            break;
        case '-':
            total = num1 - num2;
            break;
        case '*':
            total = num1 * num2;
            break;
        case '/':
            total = num1 / num2;
            break;
        default:
            cout << "Op"<<char(130)<<"ration invalide." << endl;
    }

    cout << "Le r"<<char(130)<<"sultat est : " << total << endl << endl;

    return 0;
}
