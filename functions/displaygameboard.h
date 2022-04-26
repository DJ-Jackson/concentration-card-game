//
// Created by djjac on 4/24/2022.
//

#ifndef CONCENTRATION_CARD_GAME_DISPLAYGAMEBOARD_H
#define CONCENTRATION_CARD_GAME_DISPLAYGAMEBOARD_H

// importing necessary structs
#include "../structs/gameboard.h" // #includes anything #included in "gameboard.h" including "card.h"
#include "../structs/player.h"

#include <iomanip>

void display_game_board(GameBoard gameboard, Player playerlist)
{
    std::cout << std::setw(4) << "" << "|";
    for (int i = 1; i <= 13; i++)
    {
        std::cout << std::setw(4) << i << "|";
    }
    std::cout << std::endl;

    for (int i = 0; i < 14; i++)
    {
        std::cout << "-----";
    }
    std::cout << std::endl;


}

#endif //CONCENTRATION_CARD_GAME_DISPLAYGAMEBOARD_H
