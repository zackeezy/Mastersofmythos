#include "Setting.h"
#include <string>

std::string SettingCard::getName(){
    return name;
}

void SettingCard::setName(std::string in){
    if(in != "")
        name = in;
}

std::string SettingCard::getMatcher(){
    return matcher;
}

void SettingCard::setMatcher(std::string in){
    if(matcher != "")
        matcher = in;
}

bool SettingCard::isSetting(){
    return true;
}