#include "Card.h"
#include <string>
using std::string;

Card::Card(){}

Card::Card(int p, int r, bool b, std::string n, int c, std::string m) : 
power(p), resistance(r), settingCard(b), name(n), classification(c), matcher(m) {}

Card::Card(Card& c){
    power = c.power;
    resistance = c.resistance;
    name = c.name;
    classification = c.classification;
    matcher = c.matcher;
}

Card Card::operator=(Card& c){
    power = c.power;
    resistance = c.resistance;
    name = c.name;
    classification = c.classification;
    matcher = c.matcher;
}

bool Card::isSetting(){
    return settingCard;
}

int Card::getPower(){
    return power;
}

void Card::setPower(int p){
    if(p > 0)
        power = p;
}

int Card::getResistance(){
    return resistance;
}

void Card::setResistance(int r){
    if(r > 0)
        resistance = r;
}

std::string Card::getName(){
    return name;
}

void Card::setName(std::string n){
    if(n != "")
        name = n;
}

std::string Card::getMatcher(){
    return matcher;
}

void Card::setMatcher(std::string m){
    if(m != "")
        matcher = m;
}