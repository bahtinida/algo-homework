#ifndef WORDSSEARCHER_H
#define WORDSSEARCHER_H

#include <string>
#include <vector>

class WordsSearcher {
public:
    WordsSearcher(const std::string& words);
    ~WordsSearcher() = default; //todo - why do i need this line?

    void sort();
    void print();

    //todo - how to make this function private - for it is a helper function??
    bool isGreater(int val1, int val2);

    void swapElementsInWordsList(int index1, int index2);

private:
    std::vector<std::string> mWordsList;
};

#endif // WORDSSEARCHER_H
