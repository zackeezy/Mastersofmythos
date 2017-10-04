#ifndef CREATURECARD_H
#define CREATURECARD_H

#include <string>
#include "Setting.h"

class Card : SettingCard{
public:
    Card();
    Card(int,int,bool,std::string,std::string);
    virtual ~Card();
    Card(Card&);
    Card operator=(Card&);
    int getPower();
    void setPower(int);
    int getResistance();
    void setResistance(int);

protected:
    int power;
    int resistance;
    std::string classification;
};

#endif