#include <string>
#include <stack>
#include <vector>
#include "Card.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player{
public:
    Player();
    Player(std::stack<Card>);
    Player(Player&);
    virtual ~Player();
    Card drawCard();                //returns the top card of the deck and then removes it
    void discardCard(Card);         //adds card to the discard pile
    Card getCardFromHand(int);      //returns the card from the hand at the given index
    bool setFrontline(Card);        //returns false if frontline is full
    bool setBackup(Card);           //returns false if backup is full
    void setSetting(Card);          //will replace current if there is already a setting set
    Player operator=(Player) const; //assigns the left value to this object then returns it
    bool attackHandler(Card, int);  //takes card attacking and compares it to the frontline depending on the int passed (either 0 or 1)
    Card getFrontline(int);         //gets the card in the frontline at the int index (either 0 or 1)
    void handleDeath(int,int);      //takes two indexes, one of the frontline card killed and one of the backup to replace it. If backup is empty, then the second parameter is ignored.

private:
    std::stack<Card> deck;          //the deck of cards the player has
    std::vector<Card> discarded;    //the cards that have been discarded
    std::vector<Card> hand;         //the player's hand
    std::vector<Card> frontline;    //the creatures the player has as their frontline
    std::vector<Card> backup;       //the creatures the player has as their backups 
    Card setting;                   //the setting of the player's field
    bool settingSet;                //a boolean to check if the setting card has been set yet
};

#endif