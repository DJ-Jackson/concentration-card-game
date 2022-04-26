//
// Created by djjac on 4/26/2022.
//
#define TAB "\t"

#include <iostream>
#include "../functions/playerturn.h"

#include "../structs/gameboard.h"
#include "../structs/player.h"
#include "../structs/card.h"

#include "../constants/suit.h"
using namespace std;

int main()
{
    cout << "Testing player_turn()..." << endl;

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

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            Card curr;
            curr.rank = j + 1;
            curr.suit = SUIT[i];
            test_board.game_board[i][j] = curr;
            test_board.card_count++;
        }
    }

    cout << "current card count -> " << test_board.card_count << endl;
    cout << "pre-board: " << endl;
    display_game_board(test_board, playerlist);

    bool result = player_turn(test_board, playerlist[1]);
    cout << "new card count -> " << test_board.card_count << endl;
    cout << "result -> " << result << endl;

    cout << "post-board: " << endl;
    display_game_board(test_board, playerlist);
}