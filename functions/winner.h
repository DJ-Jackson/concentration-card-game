//
// Created by djjac on 4/26/2022.
//

#ifndef CONCENTRATION_CARD_GAME_WINNER_H
#define CONCENTRATION_CARD_GAME_WINNER_H

#include "../structs/player.h"

#include <vector>

void winner(std::vector<Player> &playerlist)
{
    Player winning_player = playerlist[0];
    int highest_matches = winning_player.match_count;
    for (int i = 1; i < playerlist.size(); i++)
    {
        if (playerlist[i].match_count > highest_matches)
        {
            winning_player = playerlist[i];
            highest_matches = winning_player.match_count;
        }
    }

    std::cout << "The winning player is..." << winning_player.name << "!!!" << std::endl;
    std::cout << winning_player.name << " has " << std::to_string(highest_matches) << " matches!" << std::endl;
}

#endif //CONCENTRATION_CARD_GAME_WINNER_H
