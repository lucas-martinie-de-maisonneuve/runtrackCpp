#include <iostream>
using namespace std;

struct Point
{
    int x, y;
};

int main()
{
    Point ePoint;
    Point *ptrPoint = &ePoint;
    ePoint.x = 1;
    ePoint.y = 2;

    cout << "Avant : x = " << ePoint.x << ", y = " << ePoint.y << endl;

    ptrPoint->x = 111;
    ptrPoint->y = 222;

    cout << "Apr\x82s : x = " << ePoint.x << ", y = " << ePoint.y << endl;

    return 0;
}
