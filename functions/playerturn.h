//
// Created by djjac on 4/26/2022.
//

#define TAB "\t"

#ifndef CONCENTRATION_CARD_GAME_PLAYERTURN_H
#define CONCENTRATION_CARD_GAME_PLAYERTURN_H

// Custom struct imports
#include "../structs/player.h"
#include "../structs/gameboard.h"

// Custom function imports
#include "../functions/getplayercardchoice.h"
#include "../functions/cardmatch.h"

bool player_turn(GameBoard &board, Player &curr_player)
{
    // ask user for cards
    int row1, col1, row2, col2, loop_count{};
    Card card1, card2;

    // check if cards are on the board
    std::cout << "Pick the first card." << std::endl;
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
    loop_count = 0;

    board.game_board[row1][col1].is_flipped = true;

    std::cout << "Pick the second card." << std::endl;
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
            std::cin >> row2;
            loop_count++;
        } while (row2 >= 1 && row2 <= 4);
        loop_count = 0;

        do
        {
            if (loop_count)
            {
                std::cout << "That is an invalid column. Please choose a column between 1 and 13." << std::endl;
            }
            std::cout << "Col # -> ";
            std::cin >> col2;
            loop_count++;
        } while (col2 >= 1 && col2 <= 13);
        loop_count = 0;

        card2 = board.game_board[row2][col2];
        loop_count++;

    } while (card2.is_removed);

    board.game_board[row2][col2].is_flipped = true;

    // check if cards are a match
    if (is_match(card1, card2)) // decide if players turn is over
    {
        board.game_board[row1][col1].is_removed = true;
        board.game_board[row2][col2].is_removed = true;
        board.card_count -= 2;
        curr_player.match_count++;
        return false;
    } else
    {
        board.game_board[row1][col1].is_flipped = false;
        board.game_board[row2][col2].is_flipped = false;
        return true;
    }



}

#endif //CONCENTRATION_CARD_GAME_PLAYERTURN_H
