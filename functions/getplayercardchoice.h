//
// Created by djjac on 4/26/2022.
//

#ifndef CONCENTRATION_CARD_GAME_GETPLAYERCARDCHOICE_H
#define CONCENTRATION_CARD_GAME_GETPLAYERCARDCHOICE_H

// custom imports
#include "../structs/gameboard.h"

#include <iostream>

Card get_player_card_choice(GameBoard board)
{
    int row1, col1, loop_count{};
    Card card1;
    do
    {
        if (loop_count)
        {
            std::cout << "That card is not on the board anymore. Please try again." << std::endl;
        }
        loop_count = 0;

        do
        {
            if (loop_count)
            {
                std::cout << "That is an invalid row. Please choose a row between 1 and 4." << std::endl;
            }
            std::cout << "Row # -> ";
            std::cin >> row1;
            loop_count++;
        } while (row1 >= 1 && row1 <= 4);
        loop_count = 0;

        do
        {
            if (loop_count)
            {
                std::cout << "That is an invalid column. Please choose a column between 1 and 13." << std::endl;
            }
            std::cout << "Col # -> ";
            std::cin >> col1;
            loop_count++;
        } while (col1 >= 1 && col1 <= 13);
        loop_count = 0;

        card1 = board.game_board[row1][col1];
        loop_count++;

    } while (card1.is_removed);

    return card1;
}

#endif //CONCENTRATION_CARD_GAME_GETPLAYERCARDCHOICE_H
