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
#include <vector>

void print_dash_row()
{
    for (int i = 0; i < 14; i++)
    {
        std::cout << "-----";
    }
    std::cout << std::endl;
}

void print_game_board(GameBoard gameboard)
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
            std::string card_repr{};
            if (!curr_card.is_removed)
            {
                if (curr_card.is_flipped)
                {
                    std::string card_rank;
                    switch (curr_card.rank)
                    {
                        case 1:
                            card_rank = "A";
                            break;
                        case 11:
                            card_rank = "J";
                            break;
                        case 12:
                            card_rank = "Q";
                            break;
                        case 13:
                            card_rank = "K";
                            break;
                        default:
                            card_rank = std::to_string(curr_card.rank);
                    }
                    card_repr = card_rank + curr_card.suit;
                } else
                {
                    card_repr = "X ";
                }
            }
            std::cout << std::setw(4) << card_repr << "|";
        }
        std::cout << std::endl;

        print_dash_row();
    }

    std::cout << std::endl;
}

void display_game_board(GameBoard gameboard, std::vector<Player> playerlist)
{
    print_game_board(gameboard);

    for (auto curr_player : playerlist)
    {
        std::cout << curr_player.name << ": " << curr_player.match_count << " matches";
        std::cout << std::endl;
    }
}

void display_game_board(GameBoard gameboard)
{
    print_game_board(gameboard);
}



#endif //CONCENTRATION_CARD_GAME_DISPLAYGAMEBOARD_H
