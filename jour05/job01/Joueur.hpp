#include <iostream>

class Joueur {
private:
    int x;
    int y;

public:
    Joueur(int x = 0, int y = 0) : x(x), y(y) {}

    void setPosition(int new_x, int new_y) {
        x = new_x;
        y = new_y;
    }

    void afficherPosition() const {
        std::cout << "Position du joueur : (" << x << ", " << y << ")" << std::endl;
    }

    void deplacer(int delta_x, int delta_y) {
        x += delta_x;
        y += delta_y;
    }
};