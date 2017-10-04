#ifndef SETTINGCARD_H
#define SETTINGCARD_H

#include <string>
using std::string;

class SettingCard{
public:
    std::string getName();
    void setName(std::string);
    std::string getMatcher();
    void setMatcher(std::string);
    virtual bool isSetting();
protected:
    std::string name;
    std::string matcher;
};

#endif