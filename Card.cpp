#include "Card.h"
#include <string>
using std::string;

Card::Card(){}

Card::Card(int p, int r, bool b, int n, int c) : 
power(p), resistance(r), isSetting(b), name(n), classification(c) {}

Card::Card(Card& c){
    power = c.power;
    resistance = c.resistance;
    isSetting = c.isSetting;
    name = c.name;
    classification = c.classification;
}

Card operator=(Card& c){
    power = c.power;
    resistance = c.resistance;
    name = c.name;
    classification = c.classification;
}