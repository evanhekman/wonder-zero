#pragma once

#include <string>
#include <vector>

#include "types.h"
#include "utils.h"

class GameState; // forward declaration

class Card {
    public:
        int id;
        std::string name;
        std::vector<RESOURCE> cost;
        int successor_id = -1;
        int predecessor_id = -1;
        PlayerEffect instant_effect;
        PlayerEffect final_effect;

        Card();
        ~Card();

        // whether the specified player can play the card
        bool can_play(GameState* state, int player);
};