//
// Created by Devontae Patterson on 4/25/22.
//

#ifndef CONCENTRATION_CARD_GAME_CARDGENERATOR_H
#define CONCENTRATION_CARD_GAME_CARDGENERATOR_H

#include <random>
#include <ostream>
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "../structs/card.h"
#include "../constants/suit.h"

// This method returns the same board each time
// TODO: Seed the random number generator
// Devontae's function
// For some reason it only generates 8S each run
//Card card_randomizer()
//{
//    Card object;
//
//    std::random_device dev;
//    std::mt19937 rng(dev());
//    std::uniform_int_distribution<std::mt19937::result_type> dist13(1,13); // distribution in range [1, 13]
//    object.rank = dist13(rng);
//
//    std::uniform_int_distribution<std::mt19937::result_type> dist3(0,3); // distribution in range [0, 3]
//    object.suit = SUIT[dist3(rng)];
//
//    return object;
//}

Card card_randomizer(std::string suits = "")
{
    Card random_card;

    // Seeding random number generator to current time to ensure random number each run of card_randomizer()
    srand(time(0));

    // Creating random rank
    int rank = (rand() % 13) + 1;

    // Adding rank to random_card
    random_card.rank = rank;

    if (suits.empty())
    {
        // Creating random suit_index
        int suit_index = rand() % 4;

        // Adding random suit to random_card
        random_card.suit = SUIT[suit_index];
    } else
    {
        // Creating random suit_index
        int suit_index = rand() % suits.size();

        // Adding random suit to random_card
        random_card.suit = suits[suit_index];
    }

    return random_card;
}




#endif //CONCENTRATION_CARD_GAME_CARDGENERATOR_H
