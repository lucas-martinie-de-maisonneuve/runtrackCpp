#include <iostream>
#include <string>
using namespace std;

int main(void) {

    auto tab = make_tuple (2019, string ("La Plateforme"), 3.14, string("Etudiants")); 

    cout << "Valeur 1 : " << get<0>(tab) << endl;
    cout << "Valeur 2 : " << get<1>(tab) << endl;
    cout << "Valeur 3 : " << get<2>(tab) << endl;
    cout << "Valeur 4 : " << get<3>(tab) << endl;
   
    cout << "Adresse de Valeur 1 : " << &get<0>(tab) << endl;
    cout << "Adresse de Valeur 2 : " << &get<1>(tab) << endl;
    cout << "Adresse de Valeur 3 : " << &get<2>(tab) << endl;
    cout << "Adresse de Valeur 4 : " << &get<3>(tab) << endl;

}