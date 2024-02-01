#include "Country.h"
#include <iostream>
#include <string>
#include "SFMLtools.h"
using namespace std;

Country::Country(const std::string& countryName, std::string countryPopulation, std::string countryArea, int medalsWon, std::string path) {
    name = countryName;
    population = countryPopulation;
    area = countryArea;
    olympicMedalsWon = medalsWon;
    flagTexture.loadFromFile(path);
    flagSprite.setTexture(flagTexture);
    flagSprite.setScale(2, 2);
    flagSprite.setPosition(490, 215);
}

std::string Country::getName() const {
    return name;
}

std::string Country::getPopulation() const {
    return population;
}

std::string Country::getArea() const {
    return area;
}

void Country::draw(SFMLtools& sfmlTools, float x, float y) {
        sfmlTools.drawInfoBackground();
        sfmlTools.drawFlagSprite(flagSprite);
        sfmlTools.drawText("\t\t\t\t\t\t\t\t\tCountry: " + name + "\n\t\t\t\t\t\t\t\t\tPopulation: " + population +
            "\n\t\t\t\t\t\t\t\t\tArea: " + area + " sq km " + "\n\t\t\t\t\t\t\t\tOlympic Medals Won: " + std::to_string(olympicMedalsWon), x, y);
    }

