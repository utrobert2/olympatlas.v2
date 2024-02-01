#ifndef MENU_H
#define MENU_H

#include "game.h"
#include "SFMLtools.h"
#include "soundmanager.h"
#include <SFML/Graphics.hpp>

// Classe qui gère le menu du jeu
// Quand l'application est lancée le code game prend le relais
class Menu {
private:
    sf::Sprite menuSprite;
    sf::Texture tex;

public:
    Menu(sf::String filePath);
    void run(SFMLtools& sfmlTools);
    
};

#endif