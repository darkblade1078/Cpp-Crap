#pragma once
#ifndef ROMAN_NUMERALS_H
#define ROMAN_NUMERALS_H   
#include <unordered_map> 
#include <string>

using namespace std;

typedef unordered_map<char, int> numeralMap; 

class romanNumerals {
    public:
        romanNumerals();
        numeralMap getRomanNumeralMap();
        int romanToNumber(string romanValue);

    private:
        numeralMap numeralMap; 
};

#endif