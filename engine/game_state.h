#pragma once

#include <string>
#include <vector>

#include "types.h"

class Player; // forward declaration
class Card; // forward declaration

class GameState {
    public:
        AGE age;
        int turn;
        std::vector<Player> players;
        std::vector<std::vector<Card>> hands;

        
};