#include <iostream>
#include "./romanNumerals.h"

using namespace std;

int input(romanNumerals* rNumeral) {
    if (rNumeral == nullptr)
      return -1;
    
    std::string newValue;
    std::cout << "Enter a roman numeral: ";
    std::cin >> newValue;
    std::cout << std::endl;

    return rNumeral->romanToNumber(newValue);
}


int main() {
    romanNumerals numeral;
    int results = input(&numeral);

    if(results == -1)
      return -1;

    cout << "Your result is: " << results << endl;

    return 0;
}