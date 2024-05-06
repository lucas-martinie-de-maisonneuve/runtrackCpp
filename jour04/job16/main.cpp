#include <iostream>
using namespace std;

int nbMax (int* tab) {

    int max = *tab;
    int i = 0; 

    for (i =1 ; i< 5; i++) {
        if (*(tab+i) > max) {
            max = *(tab+i);
        }
    }
    return max; 
}

int main() {

    int tab [5] = {10,2,30,4,50}; 
    int max = nbMax(tab);

    cout << "La valeur maximale dans le tableau est : " << max << endl; 

    return 0;
}
