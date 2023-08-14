#include "Reverser.h"
#include <cmath>

int Reverser::reverseDigit(int value) {
    if (value < 0) {
        return -1;
    }
    if (value < 10) {
        return value;
    }
    int lastDigit = value % 10;
    return lastDigit * pow(10, (int)log10(value)) + reverseDigit(value / 10);
}

std::string Reverser::reverseString(const std::string& characters) {
    if (characters.empty()) {
        return "ERROR";
    }
    if (characters.length() == 1) {
        return characters;
    }
    return characters.back() + reverseString(characters.substr(0, characters.length() - 1));
}
