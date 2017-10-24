#include "Player.h"
#include "Card.h"

Player::Player(){
    settingSet = false;
}

Player::Player(std::stack<Card> deck){
    settingSet = false;
    this->deck = deck;
}

Player::Player(Player& p){
    backup = p.backup;
    deck = p.deck;
    discarded = p.discarded;
    frontline = p.frontline;
    hand = p.hand;
    setting = p.setting;
    settingSet = p.settingSet;
}

//returns the top card of the deck and then removes it
Card Player::drawCard(){
    Card top = deck.top();
    deck.pop();
    return top;
}

//adds card to the discard pile
void Player::discardCard(Card c){
    discarded.push_back(c);
}

//returns the card from the hand at the given index
Card Player::getCardFromHand(int i){
    return hand[i];
}

//returns false if frontline is full
//Only allow 2 in the frontline
bool Player::setFrontline(Card c){
    if(frontline.size() == 2){          //don't allow more than 2 on the frontline
        return false;
    }
    else if(c.isSetting()){             //don't allow setting cards on the frontline
        return false;
    }

    frontline.push_back(c);

    return true;
}

//returns false if backup is full
bool Player::setBackup(Card c){
    if(backup.size() == 4){             //don't allow more than 4 backup
        return false;
    }
    else if(c.isSetting()){             //don't allow settings in the backup
        return false;
    }

    backup.push_back(c);

    return true;
}

//will replace current if there is already a setting set
void Player::setSetting(Card c){
    if(settingSet){
        discardCard(setting);
    }
    else{
        settingSet = true;
    }
    setting = c;
}

Player Player::operator=(Player& p){
    backup = p.backup;
    deck = p.deck;
    discarded = p.discarded;
    frontline = p.frontline;
    hand = p.hand;
    setting = p.setting;
    settingSet = p.settingSet;
}

bool Player::attackHandler(Card c, int i){
    if(i < 0 || i > 1)
        throw("Frontline index must be 0 or 1.");
    
    
}