//
// Created by Mariia Yemelianova on 2/9/19.
//

#include "consonantsfilter.h"

// lab.  work #2

/*function takes a string of text as a parameter,
// returns a string made of all unique consonant letters that exist in every second word in text*/
std::string ConsonantsFilter::getConsonantsFromEverySecondWord(std::string phrase) {
    std::string consonants = "";
    int wordCounter = 0;

    for (int i = 0; i < phrase.length(); i++) {
        char current = phrase.at(i);
        if (current == ' ')
        {
            wordCounter++;
            continue;
        }
        if (wordCounter % 2 == 1)
        {
            if (consonants.find(current) == std::string::npos && stringToLower(consonants).find(current) ==
                                                                 std::string::npos && stringToUpper(consonants).find(current) == std::string::npos &&
                isConsonant(current)) {
                consonants = consonants + current;
            }
        }
    }
    consonants = stringToLower(consonants);
    std::sort(consonants.begin(), consonants.end());
    return consonants;
}

// function checks if a letter is a consonant
bool ConsonantsFilter::isConsonant(char l) {
    char consonants[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'r', 'q', 'r', 's', 't', 'v', 'w',
                         'y', 'z',};
    int size = 21;

    for (int i = 0; i < size; i++) {
        if (tolower(l) == consonants[i])
        {
            return true;
        }
    }
    return false;
}

// helper function - takes a string as parameter, converts it to uppercase
std::string ConsonantsFilter::stringToUpper(std::string str) {
    std::string uppercase = "";
    for (int i = 0; i < str.length(); i++) {
        char current = str.at(i);
        if (isupper(current) == 0)
        {
            uppercase += toupper(current);
        } else
        {
            uppercase += current;
        }
    }
    return uppercase;
}

// helper function - takes a string as parameter, converts it to lowercase
std::string ConsonantsFilter::stringToLower(std::string str) {
    std::string lowercase = "";
    for (int i = 0; i < str.length(); i++) {
        char current = str.at(i);
        if (islower(current) == 0)
        {
            lowercase += tolower(current);
        } else
        {
            lowercase += current;
        }
    }
    return lowercase;
}

