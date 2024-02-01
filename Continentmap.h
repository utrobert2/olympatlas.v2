#ifndef CONTINENTMAP_H
#define CONTINENTMAP_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Continent.h"
using namespace std;

class ContinentMap : public Continent {
private:
    sf::Texture mapTexture;
    sf::Sprite mapSprite;

public:
    ContinentMap(string name, string filepath);
    void display(SFMLtools& sfmlTools, float x, float y);
    void draw(SFMLtools& sfmlTools, float x, float y, int z);
    ~ContinentMap() = default;
};

#endif