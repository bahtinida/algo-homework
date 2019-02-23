#include "wordssearcher.h"
#include <algorithm>
#include <cstring>
#include <iostream>

WordsSearcher::WordsSearcher(const std::string &words) {
    char* buf = strdup(words.c_str());

    char* tmp = strtok(buf, ",.");
    while (tmp != nullptr) {
        mWordsList.insert(mWordsList.begin(), tmp);
        tmp = strtok(nullptr, ",.");
    }

    free(buf);
}

void WordsSearcher::sort() {
    std::sort(mWordsList.begin(), mWordsList.end(),
              [](const std::string& str1,
                 const std::string& str2) {
        return str1.length() > str2.length();
    });
}

void WordsSearcher::print() {
    for (const auto& word : mWordsList) {
        std::cout << word << std::endl;
    }
}
