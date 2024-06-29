#pragma once
#ifndef ROMAN_NUMERALS_H
#define ROMAN_NUMERALS_H   
#include <unordered_map> 
#include <string>

using namespace std;

//this is the hash map definition
typedef unordered_map<char, int> numeralMap; 

class romanNumerals {
    public:
    
        //the constructor, this setups a hashmap containing roman numerals and their value
        romanNumerals() {
            map['I'] = 1;
            map['V'] = 5;
            map['X'] = 10;
            map['L'] = 50;
            map['C'] = 100;
            map['D'] = 500;
            map['M'] = 1000;
        }

        //get the roman numeral hashmap
        numeralMap getRomanNumeralMap() {
            return map;
        }

        //convert a string of roman numerals to a number value
        int romanToNumber(string romanValue) {
            int result = 0;

            // Traverse given input
            for (int i = 0; i < romanValue.length(); i++) {

                int s1 = map.at(romanValue[i]);

                // If the next index of the char array is at the end or further,
                // then we add the number based on the result from the hashmap
                if(i + 1 >= romanValue.length()) {
                    result += s1;
                    continue;
                }
        
                int s2 = map.at(romanValue[i + 1]);

                // Checks the two indexs to see if we need to subtract based on how roman numerals work (VI == 6) (IV == 4)
                if(s1 >= s2)
                    result += s1;
                else {
                    result += (s2 - s1);
                    i++;
                }
            }

            return result;
        }

    private:
        numeralMap map; 
};

#endif