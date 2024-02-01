#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "SFMLtools.h"

class Country {
private:
    std::string name;
    std::string population;
    std::string area;
    int olympicMedalsWon;
    sf::Texture flagTexture;
    sf::Sprite flagSprite;

public:
    Country(const std::string& countryName, std::string countryPopulation, std::string countryArea, int medalsWon, std::string path);

    //getter functions
    std::string getName() const;
    std::string getPopulation() const;
    std::string getArea() const;
    void draw(SFMLtools& sfmlTools, float x, float y);
};

#endif // COUNTRY_H