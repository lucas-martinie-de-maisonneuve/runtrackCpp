#include <iostream>
using namespace std;

int main() {
    int x = 12; 
    int &ref_x = x;

    cout << "Avant modification : " << x << endl;

    ref_x = 21; 

    cout << "Apres modification : " << x << endl; 

    return 0;
}