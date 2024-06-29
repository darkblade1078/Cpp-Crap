#include <iostream>
#include "./romanNumerals.h"

using namespace std;

int input(romanNumerals* rNumeral) {
    if (rNumeral == nullptr)
      return -1;
    
    string newValue;
    cout << "Enter a roman numeral: ";
    cin >> newValue;
    cout << endl;

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