#include <iostream>
#include <string>
using namespace std;

bool estPalindrome(string mot) {
    int n = mot.size();
    for (int i = 0; i < n / 2; i++) {
        if (mot[i] != mot[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string tab[] = {"radar", "hello", "lvel", "stats", "world"};

    cout << "Palindromes trouv\x82s dans le tableau :" << endl;
    for (int i = 0; i < 5; i++) {
        if (estPalindrome(tab[i])) {
            cout << tab[i] << endl;
        }
    }

    return 0;
}
