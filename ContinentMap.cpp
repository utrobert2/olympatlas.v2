#include <SFML/Graphics.hpp>
#include <iostream>
#include "Continent.h"
#include "ContinentMap.h"
using namespace std;

ContinentMap::ContinentMap(string name, string filepath) : Continent(name) {
    SFMLtools sfmlTools;
    mapTexture.loadFromFile(filepath);
    mapSprite.setTexture(mapTexture);
}

void ContinentMap::display(SFMLtools& sfmlTools, float x, float y) {
    sfmlTools.drawNorthAmericaRects();
    sfmlTools.drawSouthAmericaRects();
    sfmlTools.drawOceaniaRects();
    sfmlTools.drawAsiaRects();
    sfmlTools.drawAfricaRects();
    sfmlTools.drawEuropeRects();
    sfmlTools.drawSprite(mapSprite);
}

void ContinentMap::draw(SFMLtools& sfmlTools, float x, float y, int z) {
    vector<Country*> countries = getCountries();
    countries[z]->draw(sfmlTools, x, y);
}