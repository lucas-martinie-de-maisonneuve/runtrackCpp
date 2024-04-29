int main()
{
    char c = '\x01';
    short int p = 10;
    int w, x, y, z;

    x = p + 3;
    // Type : short int
    // Valeur : 13
    y = c + 1;
    // Type : int
    // Valeur : 2
    z = p + c;
    // Type:int
    // Valeur : 11
    w = 3 * p + 5 * c;
    // Type : int
    // Valeur : 35
}