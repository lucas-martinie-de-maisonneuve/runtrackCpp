#include <iostream>
using namespace std;

struct Point
{
    int x = 1, y = 2;
};

int main()
{
    Point ePoint;
    Point *ptrPoint = &ePoint;

    cout << "Avant : x = " << ePoint.x << ", y = " << ePoint.y << endl;

    ptrPoint->x = 111; ptrPoint->y = 222;

    cout << "Apr\x8As : x = " << ePoint.x << ", y = " << ePoint.y << endl;

    return 0;
}