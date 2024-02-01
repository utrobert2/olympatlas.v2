#ifndef GAME_H
#define GAME_H

#include "WorldMap.h"
#include "SFMLtools.h"
#include "soundmanager.h"

class Game {
private:
    WorldMap worldMap;

public:
    Game();
    void setWorld();
    void run(SFMLtools& sfmlTools, SoundManager& soundManager);
    ~Game();
};

#endif // GAME_H