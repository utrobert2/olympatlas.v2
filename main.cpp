#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "SFMLtools.h"
#include "menu.h"
#include "soundmanager.h"

int main() {
    SFMLtools sfmlTools;
    sfmlTools.setContinentRectangles();
    sfmlTools.setNorthAmericaRects();
    sfmlTools.setSouthAmericaRects();
    sfmlTools.setOceaniaRects();
    sfmlTools.setAsiaRects();
    sfmlTools.setAfricaRects();
    sfmlTools.setEuropeRects();

    Menu m("img/menu.png");
    m.run(sfmlTools);

    return 0;
}
