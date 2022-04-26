//
// Created by djjac on 4/26/2022.
//
#define TAB "\t"

#include <iostream>

#include "../functions/playgame.h"

using namespace std;

int main()
{
    cout << "Testing player_turn()..." << endl;

    int num_players = 2;

    cout << TAB << "Number of players -> " << num_players << endl;

    vector<Player> playerlist;
    Player player1, player2;

    player1.name = "John";

    player2.name = "Jane";

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

    cout << "Starting game." << endl;
    play_game(test_board, playerlist);


    cout << "new card count -> " << test_board.card_count << endl;
    cout << "post-board: " << endl;
    display_game_board(test_board, playerlist);
}
