//
// Created by djjac on 4/24/2022.
//

#ifndef CONCENTRATION_CARD_GAME_GAMEBOARD_H
#define CONCENTRATION_CARD_GAME_GAMEBOARD_H

#include "../structs/card.h"

struct GameBoard
{
    Card game_board[4][13];
    int card_count = 0; // Defaults the card_count to 0 for each initialization
};


#endif //CONCENTRATION_CARD_GAME_GAMEBOARD_H
