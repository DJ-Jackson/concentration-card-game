//
// Created by djjac on 4/27/2022.
//

#ifndef CONCENTRATION_CARD_GAME_CREATEPLAYERLIST_H
#define CONCENTRATION_CARD_GAME_CREATEPLAYERLIST_H

#include "../structs/player.h"

#include <vector>

std::vector<Player> create_player_list()
{
    std::vector<Player> player_list;
    int num_players;
    std::string player_name;
    do
    {
        std::cout << "How many people are playing? -> ";
        std::cin >> num_players;
    } while (num_players < 2 || 8 < num_players);

    for (int i = 0; i < num_players; ++i)
    {
        std::cout << "What is player " << i + 1 << "'s name? -> ";
        std::cin >> player_name;

        Player curr;
        curr.name = player_name;
        player_list.push_back(curr);
    }

    return player_list;
}

#endif //CONCENTRATION_CARD_GAME_CREATEPLAYERLIST_H
