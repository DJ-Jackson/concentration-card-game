//
// Created by djjac on 4/27/2022.
//

#ifndef CONCENTRATION_CARD_GAME_CREATEGAMEBOARD_H
#define CONCENTRATION_CARD_GAME_CREATEGAMEBOARD_H

#include "../structs/gameboard.h"
#include "../structs/card.h"
#include "../functions/cardgenerator.h"
#include "../functions/cardinboard.h"
#include "../constants/suit.h"

GameBoard create_game_board()
{
    GameBoard board;
    int spades_count{}, clubs_count{}, diamonds_count{}, hearts_count{}, pos;
    double completion_perc{};
    std::string suits = "HDSC";
    for (int i = 0; i < 4; i++)
    {
        std::cout << completion_perc << "% done." << std::endl;
        completion_perc += 25;
        for (int j = 0; j < 13; j++)
        {
            Card curr;

            if (suits.size() == 4)
            {
                do
                {
                    curr = card_randomizer();
                } while (card_is_in_board(board, curr, i, j));
            } else
            {
                do
                {
                    curr = card_randomizer(suits);
                } while (card_is_in_board(board, curr, i, j));
            }

            board.game_board[i][j] = curr;
            board.card_count++;

            switch (curr.suit)
            {
                case 'H':
                    hearts_count++;
                    if (hearts_count == 13)
                    {
                        pos = suits.find(SUIT[0]);
                        suits.erase(pos, 1);
                    }
                    break;
                case 'D':
                    diamonds_count++;
                    if (diamonds_count == 13)
                    {
                        pos = suits.find(SUIT[1]);
                        suits.erase(pos, 1);
                    }
                    break;
                case 'S':
                    spades_count++;
                    if (spades_count == 13)
                    {
                        pos = suits.find(SUIT[2]);
                        suits.erase(pos, 1);
                    }
                    break;
                case 'C':
                    clubs_count++;
                    if (clubs_count == 13)
                    {
                        pos = suits.find(SUIT[3]);
                        suits.erase(pos, 1);
                    }
                    break;
            }
        }
    }
    return board;
}

#endif //CONCENTRATION_CARD_GAME_CREATEGAMEBOARD_H
