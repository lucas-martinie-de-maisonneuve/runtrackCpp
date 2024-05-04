#include <iostream>
using namespace std;

int main()
{
    int tableau1[5] = {1, 3, 5, 7, 9};
    int tableau2[4] = {2, 4, 6, 8};
    int tableauFusionne[9];
    int i = 0, j = 0, k = 0;

    while (i < 5 && j < 4)
    {
        if (tableau1[i] < tableau2[j])
        {
            tableauFusionne[k++] = tableau1[i++];
        }
        else
        {
            tableauFusionne[k++] = tableau2[j++];
        }
    }

    while (i < 5)
    {
        tableauFusionne[k++] = tableau1[i++];
    }

    while (j < 4)
    {
        tableauFusionne[k++] = tableau2[j++];
    }

    cout << "Tableau fusionn\x82 : ";
    for (int i = 0; i < 9; ++i)
    {
        cout << tableauFusionne[i] << " ";
    }
    return 0;
}
