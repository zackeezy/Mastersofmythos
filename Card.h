#ifndef CREATURECARD_H
#define CREATURECARD_H

#include <string>

class Card{
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
    std::string getName();
    void setName(std::string);
    std::string getMatcher();
    void setMatcher(std::string);
    bool isSetting();

protected:
    int power;
    int resistance;
    std::string classification;
    std::string name;
    std::string matcher;
    bool settingCard;
};

#endif