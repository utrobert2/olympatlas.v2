#ifndef WORLDMAP_H
#define WORLDMAP_H

#include <vector>
#include "Continentmap.h"
#include "SFMLtools.h"

// Classe qui contient les fonctions pour afficher la carte du monde et les continents
class WorldMap {
private:
    std::vector<ContinentMap*> continents;
    sf::Texture worldMapTexture;
    sf::Sprite worldMapSprite;

public:
    WorldMap();


    // Affiche la carte du monde 
    void display(SFMLtools& sfmlTools, float x, float y) const;

    // Ajouter un continent à la carte du monde
    void addContinent(ContinentMap* continent);

    // Affiche les continents
    void displaySelected(SFMLtools& sfmlTools, float x, float y, int z);

    // Affiche les pays
    void displaySelectedCountries(SFMLtools& sfmlTools, float x, float y, int z1, int z2);
    ~WorldMap();
};

#endif