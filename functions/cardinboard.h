//
// Created by djjac on 4/27/2022.
//

#ifndef CONCENTRATION_CARD_GAME_CARDINBOARD_H
#define CONCENTRATION_CARD_GAME_CARDINBOARD_H

#include "../structs/gameboard.h"

bool card_is_in_board(GameBoard &board, Card search, int upper_row_limit, int lower_row_limit)
{
    for (int i = 0; i < upper_row_limit; i++)
    {
        for (int j = 0; j < lower_row_limit; j++)
        {
            Card curr = board.game_board[i][j];
            if ((search.rank == curr.rank) && (search.suit == curr.suit))
            {
                return true;
            }
        }
    }
    return false;
}

#endif //CONCENTRATION_CARD_GAME_CARDINBOARD_H
