#include "WorldMap.h"


WorldMap::WorldMap() {
        SFMLtools sfmlTools;
        continents = {};
        sfmlTools.loadTexture(worldMapTexture, "img/worldmap.png");
        worldMapSprite.setTexture(worldMapTexture);
    }


    // Affiche la carte du monde 
    void WorldMap::display(SFMLtools& sfmlTools, float x, float y) const {
        sfmlTools.drawContinentRectangles();
        sfmlTools.drawSprite(worldMapSprite);
    }

    // Ajouter un continent à la carte du monde
    void WorldMap::addContinent(ContinentMap* continent) {
        continents.push_back(continent);
    }

    // Affiche les continents
    void WorldMap::displaySelected(SFMLtools& sfmlTools, float x, float y, int z) {
        if (continents.size() != 0) {
            continents[z]->display(sfmlTools, x, y);
        }
    }

    // Affiche les pays
    void WorldMap::displaySelectedCountries(SFMLtools& sfmlTools, float x, float y, int z1, int z2) {
        if (continents.size() != 0) {
            continents[z1]->draw(sfmlTools, x, y, z2);
        }
    }

    WorldMap::~WorldMap() = default;

