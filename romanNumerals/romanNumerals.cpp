#include "romanNumerals.h"

romanNumerals::romanNumerals() {
    this->numeralMap['I'] = 1;
    this->numeralMap['V'] = 5;
    this->numeralMap['X'] = 10;
    this->numeralMap['L'] = 50;
    this->numeralMap['C'] = 100;
    this->numeralMap['D'] = 500;
    this->numeralMap['M'] = 1000;
}

numeralMap romanNumerals::getRomanNumeralMap() {
    return numeralMap;
}

int romanNumerals::romanToNumber(string romanValue) {
    int result = 0;

    // Traverse given input
    for (int i = 0; i < romanValue.length(); i++) {

        // Grabs a number based on the input value for the hashmap (X == 10)
        int s1 = this->numeralMap.at(romanValue[i]);

        // If the next index of the char array is at the end or further,
        // then we add the number based on the result from the hashmap
        if(i + 1 >= romanValue.length()) {
            result += s1;
            continue;
        }
        
        int s2 = this->numeralMap.at(romanValue[i + 1]);

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