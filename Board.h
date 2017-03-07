#include "Card.h"
#include <stack>
#include <vector>
using std::stack;
using std::vector;

#ifndef BOARD_H
#define BOARD_H

class Board{
    public:
    //Player one
    stack<Card> p1Deck;
    stack<Card> p1Discarded;
    vector<Card> p1Hand;
    Card p1Frontline[2];
    Card p1Backup[4];
    Card p1Setting;

    //Player two
    stack<Card> p2Deck;
    stack<Card> p2Discarded;
    vector<Card> p2Hand;
    Card p2Frontline[2];
    Card p2Backup[4];
    Card p2Setting;
}

#endif