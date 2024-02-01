#include "soundmanager.h"

SoundManager::SoundManager(string filePath) {
    buffer.loadFromFile(filePath);
    sound.setBuffer(buffer);
}

// Jouer le son
void SoundManager::playSound() {
    sound.play();
}

void SoundManager::setLoop() {
        sound.setLoop(1);
    }

void SoundManager::setVolume(float volume) {
    sound.setVolume(volume);
}

SoundManager::~SoundManager() = default;



