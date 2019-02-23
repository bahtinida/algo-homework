#include "wordssearcher.h"
#include <algorithm>
#include <cstring>
#include <iostream>

WordsSearcher::WordsSearcher(const std::string &words)
{
    char* buf = strdup(words.c_str());
    char* tmp = strtok(buf, ",."); // splits a string into anm array of chars
    while (tmp != nullptr)
    {
        mWordsList.insert(mWordsList.begin(), tmp);
        tmp = strtok(nullptr, ",.");
    }
    free(buf);
}

//todo - need to sort this out))
void WordsSearcher::sort()
{
    int size = (int) mWordsList.size();
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size-1-i; j++) {
            if (isGreater(mWordsList[j+1].length(), mWordsList[j].length()))
            {
                swapElementsInWordsList(j, j+1);
            }
        }
    }
}

bool WordsSearcher::isGreater(int val1, int val2)
{
    if (val1 > val2)
    {
        return true;
    }
    return false;
}

void WordsSearcher::swapElementsInWordsList(int index1, int index2)
{
    std::string temp = mWordsList[index1];
    mWordsList[index1] = mWordsList[index2];
    mWordsList[index2] = temp;

}

/*void WordsSearcher::sort() {
    std::sort(mWordsList.begin(), mWordsList.end(),
              [](const std::string& str1,
                 const std::string& str2) {
        return str1.length() > str2.length();
    });
}*/

//void WordsSearcher::print()
//{
//
//    //todo - add logic to print string
//}


void WordsSearcher::print() {
    for (const auto& word : mWordsList) {
        std::cout << word << std::endl;
    }
    }

