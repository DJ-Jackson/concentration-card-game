//
// Created by Devontae Patterson on 4/25/22.
//

#ifndef CONCENTRATION_CARD_GAME_CARDGENERATOR_H
#define CONCENTRATION_CARD_GAME_CARDGENERATOR_H


#include <random>
#include <ostream>
#include <iostream>
#include "../structs/card.h"
#include "../constants/suit.h"

Card card_randomizer()
{
    Card object;

    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist13(1,13); // distribution in range [1, 13]
    object.rank = dist13(rng);

    std::uniform_int_distribution<std::mt19937::result_type> dist3(0,3); // distribution in range [0, 3]
    object.suit = SUIT[dist3(rng)];

    return object;
}



#endif //CONCENTRATION_CARD_GAME_CARDGENERATOR_H
