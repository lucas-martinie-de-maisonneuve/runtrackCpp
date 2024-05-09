#include <iostream>
#include "Joueur.hpp"

int main() {
    Joueur joueur;
    joueur.afficherPosition();
    joueur.deplacer(12, 5);
    joueur.afficherPosition();
    joueur.setPosition(20, 7);
    joueur.afficherPosition();
    return 0;
}