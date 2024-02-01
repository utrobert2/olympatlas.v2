#include "menu.h"

Menu::Menu(sf::String filePath) {
    tex.loadFromFile(filePath);
    menuSprite.setTexture(tex);
}

void Menu::run(SFMLtools& sfmlTools) {
    int mouseClick = 0;
    SoundManager menuMusic("music/msMenu.wav");
    SoundManager bgMusic("music/msOlympics.wav");
    menuMusic.setVolume(50);
    menuMusic.playSound();
    // Boucle render du menu
    while (sfmlTools.getWindow().isOpen()) {
        sfmlTools.handleMenuInput(mouseClick);
        sfmlTools.clear();
        if (mouseClick == 1) {
            Game g;
            g.run(sfmlTools, bgMusic);
            mouseClick = 0;
        }
    }
}