#ifndef SFMLTOOLS_H
#define SFMLTOOLS_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
using namespace std;

class SFMLtools {
private:
    sf::RenderWindow window;
    // Ces rectangles sont utilisés pour identifier les pays/continentssur lesquels le joueur clique
    // Les pays/continents sont identifiés grace aux limites des rectangles
    // basé sur le marqueur qui est affiché sur la carte
    vector<sf::RectangleShape> continentRects;
    vector<sf::RectangleShape> northAmericaRects;
    vector<sf::RectangleShape> southAmericaRects;
    vector<sf::RectangleShape> oceaniaRects;
    vector<sf::RectangleShape> africaRects;
    vector<sf::RectangleShape> asiaRects;
    vector<sf::RectangleShape> europeRects;


public:
    SFMLtools();

    // Dessine les rectangles des continents
    void drawContinentRectangles();
    void drawNorthAmericaRects();
    void drawSouthAmericaRects();
    void drawOceaniaRects();
    void drawAsiaRects();
    void drawAfricaRects();
    void drawEuropeRects();

    // Paramètres pour les rectangles des continents
    void setContinentRectangles();
    void setNorthAmericaRects();
    void setSouthAmericaRects();
    void setOceaniaRects();
    void setAsiaRects();
    void setAfricaRects();
    void setEuropeRects();

    // Charge les textures et affiche les sprites
    void loadTexture(sf::Texture& texture, const std::string& filePath);
    void drawSprite(const sf::Sprite& sprite);
    void drawInfoBackground();
    void drawFlagSprite(const sf::Sprite& sprite);

    // Charge les polices et affiche le texte
    void loadFont(sf::Font& font, const std::string& filePath);
    void drawText(const std::string& text, float x, float y, int fontSize = 30, const sf::Color& color = sf::Color::White);

    // Gestion des entrées
    void handleInput(int& mouseclick, int& selectedContinentIndex, bool& continent, int& selectedCountryIndex);
    void handleMenuInput(int& mouseclick);

    // Fonction pour afficher le menu
    sf::RenderWindow& getWindow();
    void clear();
    void display();

    ~SFMLtools();
};

#endif
