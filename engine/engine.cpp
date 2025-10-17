#pragma once

#include <cassert>
#include <iostream>

#include "game_state.h"

void run_age(GameState* state) {
    std::cout << "commencing age " << state->age << std::endl;
    for (int i = 0; i < 6; i++) {
        run_turn(state);
        run_battles(state);
    }
    switch(state->age) {
        case AGE::FIRST:
            state->age = AGE::SECOND;
            break;
        case AGE::SECOND:
            state->age = AGE::THIRD;
            break;
        case AGE::THIRD:
            state->age = AGE::SCORING;
            break;
        default:
            throw std::invalid_argument("error: cannot continue past the third age.");
            break;
    }
};

void run_turn(GameState* state) {
    
};

void run_battles(GameState* state) {
    
};

void process_results(GameState* state) {

};

int main(int argc, char* argv[]) {

    assert(argc == 2);
    int players = std::stoi(argv[1]);

    GameState* state = new GameState();
    
    for (int i = 0; i < 3; i++) {
        run_age(state);
    }
    process_results(state);
};