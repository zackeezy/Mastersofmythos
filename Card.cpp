#include "Card.h"
#include <string>
using std::string;

Card::Card(){}

Card::Card(int p, int r, bool b, std::string n, std::string m) : 
power(p), resistance(r), settingCard(b), name(n), matcher(m) {
    if(power < 0){
        power = 1;
    }
    else if(power > 10000){
        power = 10000;
    }
    
    if(resistance < 0){
        resistance = 1;
    }
    else if(resistance > 10000){
        resistance = 10000;
    }
    
    setClassification();
}

Card::Card(Card& c){
    power = c.power;
    resistance = c.resistance;
    name = c.name;
    classification = c.classification;
    matcher = c.matcher;
}

Card::~Card(){
    //No dynamic memory, so a destructor is unnecessary.
}

Card Card::operator=(const Card& c){
    power = c.power;
    resistance = c.resistance;
    name = c.name;
    classification = c.classification;
    matcher = c.matcher;
}

bool Card::operator ==(const Card& c) {
    return (power == c.power and
        resistance == c.resistance and
        name == c.name and
        classification == c.classification and
        matcher == c.matcher);
}

bool Card::isSetting(){
    return settingCard;
}

int Card::getPower(){
    return power;
}

void Card::setPower(int p){
    if(p > 0 and p < 10000)
        power = p;
    else if(p < 0){
        power = 1;
    }
    else{
        power = 10000;
    }
    
    setClassification();
}

int Card::getResistance(){
    return resistance;
}

void Card::setResistance(int r){
    if(r > 0 && r < 10000)
        resistance = r;
    else if(r < 0){
        resistance = 1;
    }
    else{
        resistance = 10000;
    }
    
    setClassification();
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

void Card::setClassification(){
    if(power + resistance < 2000){
        classification = 1;
    }
    else if(power + resistance < 10000){
        classification = 2;
    }
    else{
        classification = 3;
    }
}
