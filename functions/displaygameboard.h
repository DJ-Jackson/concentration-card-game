//
// Created by djjac on 4/24/2022.
//

#ifndef CONCENTRATION_CARD_GAME_DISPLAYGAMEBOARD_H
#define CONCENTRATION_CARD_GAME_DISPLAYGAMEBOARD_H

// importing necessary structs
#include "../structs/gameboard.h" // #includes anything #included in "gameboard.h" including "card.h"
#include "../structs/player.h"
#include "../structs/card.h"

#include <iomanip>
#include <iostream>

void print_dash_row()
{
    for (int i = 0; i < 14; i++)
    {
        std::cout << "-----";
    }
    std::cout << std::endl;
}

void display_game_board(GameBoard gameboard, Player playerlist[], int playerlist_len)
{
    std::cout << std::setw(4) << "" << "|";
    for (int i = 1; i <= 13; i++)
    {
        std::cout << std::setw(4) << i << "|";
    }
    std::cout << std::endl;

    print_dash_row();

    for (int i = 0; i < 4; i++)
    {
        std::cout << std::setw(4) << i + 1 << "|";
        for (int j = 0; j < 13; j++)
        {
            Card curr_card = gameboard.game_board[i][j];
            std::string card_repr;
            if (curr_card.is_flipped)
            {
                card_repr = std::to_string(gameboard.game_board[i][j].rank) + gameboard.game_board[i][j].suit;
            } else
            {
                card_repr = "X ";
            }
            std::cout << std::setw(4) << card_repr << "|";
        }
        std::cout << std::endl;

        print_dash_row();
    }

    std::cout << std::endl;

    for (int i = 0; i < playerlist_len; i++)
    {
        Player curr_player = *(playerlist + i);
        std::cout << curr_player.name << ": " << curr_player.match_count << " matches";
        std::cout << std::endl;
    }
}

#endif //CONCENTRATION_CARD_GAME_DISPLAYGAMEBOARD_H
