//
// Created by djjac on 4/27/2022.
//

#ifndef CONCENTRATION_CARD_GAME_RUNGAME_H
#define CONCENTRATION_CARD_GAME_RUNGAME_H

// Custom imports of functions
#include "../functions/creategameboard.h"
#include "../functions/createplayerlist.h"
#include "../functions/playgame.h"
#include "../functions/winner.h"

// Custom imports of structs
#include "../structs/gameboard.h"
#include "../structs/player.h"

// Built-in c++ imports
#include <vector>

void run_game()
{
    GameBoard board = create_game_board();
    std::vector<Player> player_list = create_player_list();
    play_game(board, player_list);
    winner(player_list);
}

#endif //CONCENTRATION_CARD_GAME_RUNGAME_H
