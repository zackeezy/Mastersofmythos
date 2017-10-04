#include <string>
#include <stack>
#include <vector>
#include "Card.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player{
public:
    Card 
private:
    std::stack<Card> deck;
    std::stack<Card> discarded;
    std::vector<Card> hand;
    Card frontline[2];
    Card backup[4];
    Card setting;
};

#endif