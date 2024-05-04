#include <iostream>
using namespace std;

bool job01();

int main()
{
    if (job01()) {
        cout << endl << endl << "=== Code Execution Successful ===" << endl;
    }
    return 0;
}

bool job01()
{
    int number = 2019;
    int *point = &number;

    cout << "La valeur de 'number' est : " << *point << endl;
    return true;
}
