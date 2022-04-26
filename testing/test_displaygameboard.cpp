//
// Created by djjac on 4/25/2022.
//
#define TAB "\t"

#include <iostream>
#include <vector>

#include "../functions/displaygameboard.h"

#include "../structs/gameboard.h"
#include "../structs/player.h"
#include "../structs/card.h"

#include "../constants/suit.h"
using namespace std;


int main()
{
    cout << "Testing display_game_board()..." << endl;

    int num_players = 2;

    cout << TAB << "Number of players -> " << num_players << endl;

    vector<Player> playerlist;
    Player player1, player2;

    player1.name = "John";
    player1.match_count = 2;

    player2.name = "Jane";
    player2.match_count = 3;

    playerlist.push_back(player1);
    playerlist.push_back(player2);

    GameBoard test_board;

    int flipped = 2;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            Card curr;
            curr.rank = j + 1;
            curr.suit = SUIT[i];
            if (j == i && flipped)
            {
                curr.is_flipped = true;
                flipped--;
            }
            test_board.game_board[i][j] = curr;
        }
    }

    display_game_board(test_board, playerlist);

}

