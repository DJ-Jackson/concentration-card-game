//
// Created by djjac on 4/27/2022.
//

#ifndef CONCENTRATION_CARD_GAME_CREATEGAMEBOARD_H
#define CONCENTRATION_CARD_GAME_CREATEGAMEBOARD_H

#include "../structs/gameboard.h"
#include "../structs/card.h"
#include "../functions/card_generator.h"
#include "../functions/cardinboard.h"

GameBoard create_game_board()
{
    GameBoard board;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            Card curr;
            do
            {
                curr = card_randomizer();
            } while (!card_is_in_board(board, curr, i, j));
            board.game_board[i][j] = curr;
            board.card_count++;
        }
    }
    return board;
}

#endif //CONCENTRATION_CARD_GAME_CREATEGAMEBOARD_H
