#ifndef UNTITLED_WORKER_H
#define UNTITLED_WORKER_H

#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;


class Worker {
    //laboratorna robota #1

    public:

    int countWordsInString(const string& words)
    {
        int wordCount = 0;
        if (words.at(0) != '.' && words.at(0) != ',')
        {
            for (int i = 0; i < words.length(); i++)
            {
                if (words.at(i) == ',')
                {
                    wordCount++;
                } else if (words.at(i) == '.')
                {
                    return ++wordCount;
                }
            }
        }
        return wordCount;
    }

//public: string * getLetterCountsForWords (string * array)
//    {
//
//    }

    //this should be removed. it is better to print substrings

    string * makeArrayOfWords(const string& words)
        {
            const int wordCount = countWordsInString(words);
            string wordsArray[wordCount];
            if (wordCount == 0) return nullptr;

            int substringStart = 0;
            for (int i = 0; i < wordCount; i++) {
                int substringLength = 0;

                while (words.at(substringLength) != ',' && words.at(i) != '.')
                {
                    substringLength++;
                }

                string substr = words.substr(substringStart, substringLength);
                wordsArray[i] = substr;
                substringStart = substringLength +1;
            }

            return wordsArray;
        }

public:
    int * getArrayOfWordLengths(const string& words)
    {
        int wordsCount = countWordsInString(words);
        int lengthsArray[wordsCount];
        if (wordsCount != 0)
        {
            int currentIndex = 0;
            for (int i = 0; i < wordsCount; i++) {
                int substringLength = 0;

                while (words.at(currentIndex) != ',' && words.at(i) != '.')
                {
                    substringLength++;
                    currentIndex++;
                }
                lengthsArray[i] = substringLength;
                if (words.at(i) != '.') break;
                currentIndex += 2;
            }
        }
        return lengthsArray;
    }




public:
    void printArray(string * array, int size)
    {
        for (int i = 0; i < size; i++) {
            string word = array[i];
            cout << word << endl;
        }
    }

    // lab. robota #2







// laboratorna robota #3
    public:
        int countDigits1(string phrase)
    {
        int digitCount = 0;

        for (int i = 0; i < phrase.length(); i++) {
            if (isdigit(phrase.at(i))) {
                digitCount++;
            }
        }
        return digitCount;
    }

    public:
        int countDigits2(const string &phrase, int counter, int count) {
            if (counter == phrase.length()) {
                return count;
            } else {
                if (isdigit(phrase.at(counter))) {
                    count++;
                }
                counter++;
                return countDigits2(phrase, counter, count);
            }
        }
    };

#endif //UNTITLED_WORKER_H
