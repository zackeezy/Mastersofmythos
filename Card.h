#include <string>
using std::string;

#ifndef CARD_H
#define CARD_H

class Card{
    public:
    Card();
    Card(int,int,bool,string,string);
    virtual ~Card();
    Card(Card&);
    Card operator=(Card&);

    int power;
    int resistance;
    bool isSetting;
    string classification;
    string name;
};

#endif