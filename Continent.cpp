#include "Continent.h"

    Continent::Continent(const string& name) : name(name) {

    }

    vector<Country*>& Continent::getCountries() {
        return countries;
    }

    string Continent::getName() const {
        return name;
    }

    // Ajouter un pays au continent
    void Continent::addCountry(Country* country) {
        countries.push_back(country);
    }
    // Continent::~Continent() = default;
