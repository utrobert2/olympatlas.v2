#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include <SFML/Audio.hpp>
#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;

// Classe qui gère les effets sonores
class SoundManager {
private:
    sf::SoundBuffer buffer;
    sf::Sound sound;

public:
    SoundManager(string filePath);

    // Jouer le son
    void playSound();
    void setLoop();
    void setVolume(float volume);

    ~SoundManager();

};

#endif
