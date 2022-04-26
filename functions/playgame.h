//
// Created by djjac on 4/26/2022.
//

#ifndef CONCENTRATION_CARD_GAME_PLAYGAME_H
#define CONCENTRATION_CARD_GAME_PLAYGAME_H

#include "../structs/gameboard.h"
#include "../structs/player.h"

#include "../functions/displaygameboard.h"
#include "../functions/playerturn.h"

#include <vector>

void play_game(GameBoard &gameboard, std::vector<Player> &playerlist)
{
    int player_ind{}, num_of_players = playerlist.size();
    bool next_turn;

    do
    {
        if (player_ind == num_of_players)
        {
            player_ind = 0;
        }

        display_game_board(gameboard, playerlist);
        std::cout << "It Is " << playerlist[player_ind].name << "'s Turn." << std::endl;

        next_turn = player_turn(gameboard, playerlist[player_ind]);

        if (next_turn)
        {
            player_ind++;
            std::cout << "Better luck next time :(" << std::endl;
        } else
        {
            std::cout << "CONGRATS!! YOU FOUND A MATCH!!" << std::endl;
        }

    } while (gameboard.card_count);
}

#endif //CONCENTRATION_CARD_GAME_PLAYGAME_H
