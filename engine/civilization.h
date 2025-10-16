#pragma once

#include <functional>
#include <vector>

#include "types.h"
#include "utils.h"

class GameState; // forward declaration

class Civilization {
    public:
        CIVILIZATION civ;
        int wonder_stages;
        std::vector<PlayerEffect> wonder_effects;
    
        Civilization();
        ~Civilization();
};