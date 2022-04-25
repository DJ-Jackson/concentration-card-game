//
// Created by djjac on 4/24/2022.
//

#ifndef CONCENTRATION_CARD_GAME_CARD_H
#define CONCENTRATION_CARD_GAME_CARD_H

struct Card
{
    int rank;
    char suit;
    bool is_flipped = false;
    bool is_removed = false;
};

#endif //CONCENTRATION_CARD_GAME_CARD_H
