//
// Created by djjac on 4/27/2022.
//
#include "../functions/winner.h"
#include "../structs/player.h"

#include <vector>
using namespace std;

int main()
{
    vector<Player> playerlist;
    Player player1, player2;

    player1.name = "John";
    player1.match_count = 26;

    player2.name = "DJ";
    player2.match_count = 10;

    playerlist.push_back(player1);
    playerlist.push_back(player2);

    winner(playerlist);
}