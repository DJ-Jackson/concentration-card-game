//
// Created by djjac on 4/26/2022.
//

#ifndef CONCENTRATION_CARD_GAME_CARDMATCH_H
#define CONCENTRATION_CARD_GAME_CARDMATCH_H

// Custom struct import
#include "../structs/card.h"

// Custom constant import
#include "../constants/suit.h"

bool is_same_color(char suit1, char suit2)
{
    if ((suit1 == SUIT[0] && suit2 == SUIT[1]) || (suit1 == SUIT[1] && suit2 == SUIT[0]))
    {
        return true;
    }
    if ((suit1 == SUIT[2] && suit2 == SUIT[3]) || (suit1 == SUIT[3] && suit2 == SUIT[2]))
    {
        return true;
    }
    return false;
}

bool is_match(Card card1, Card card2)
{
    if (card1.rank != card2.rank)
    {
        return false;
    }
    return is_same_color(card1.suit, card2.suit);
}

#endif //CONCENTRATION_CARD_GAME_CARDMATCH_H
