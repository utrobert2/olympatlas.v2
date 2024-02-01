

#ifndef CONTINENT_H
#define CONTINENT_H

#include <vector>
#include "Country.h"
#include "SFMLtools.h"
using namespace std;

// Classe abstraite qui hérite de la classe ContinentMap et qui contient les fonctions virtuelles pures display et draw
// Contient l'information sur le nom du continent et les pays qui le composent
class Continent {
private:
    string name;
    vector<Country*> countries;

public:
    Continent(const string& name);

    vector<Country*>& getCountries();
    string getName() const;

    // Ajouter un pays au continent
    void addCountry(Country* country);

    // Fonctions virtuelles
    virtual void display(SFMLtools& sfmlTools, float x, float y) = 0;
    virtual void draw(SFMLtools& sfmlTools, float x, float y, int z) = 0;

    // ~Continent();
};

#endif