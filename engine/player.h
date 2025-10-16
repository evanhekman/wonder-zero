#pragma once

#include <string>
#include <vector>

#include "types.h"
#include "card.h"
#include "civilization.h"

class GameState; // forward declaration

class Player {
    public:
        // meta information
        int placement;
        std::vector<Card*>* hand;
        Civilization civ;
        
        // board
        std::vector<Card*> played;
        std::vector<RESOURCE> resources;
        std::vector<RESOURCE_EFFECT> resource_effects;
        std::vector<int> symbols; // for greens
        int coins;
        int military;

        Player();
        ~Player();

        // things the player has to offer
        std::vector<RESOURCE> available_for_trade(GameState* state);
        
        // things the player has available if they trade + cost
        std::vector<std::pair<RESOURCE, int>> available_with_trade(GameState* state);

        // (card index, coin cost) vector of the legal moves a player can take
        std::vector<std::pair<int, int>> available_options(GameState* state);

        // how many VP the player would have if the game ended
        int current_points();
};