#ifndef WORDSSEARCHER_H
#define WORDSSEARCHER_H

#include <string>
#include <vector>

class WordsSearcher {
public:
    WordsSearcher(const std::string& words);
    ~WordsSearcher() = default;

    void sort();
    void print();
private:
    std::vector<std::string> mWordsList;
};

#endif // WORDSSEARCHER_H
