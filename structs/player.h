//
// Created by djjac on 4/24/2022.
//

#ifndef CONCENTRATION_CARD_GAME_PLAYER_H
#define CONCENTRATION_CARD_GAME_PLAYER_H

#include <iostream>

struct Player
{
    std::string name;
    int match_count{}; // defaults match_count to 0 for each initialization
    bool is_winner = false; // defaults is_Winner to false for each initialization
};

#endif //CONCENTRATION_CARD_GAME_PLAYER_H
