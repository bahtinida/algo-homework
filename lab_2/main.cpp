// Лабораторна робота №3. Вариант 5

#include <ctype.h>
#include <iostream>
#include "Worker.h"
#include "wordssearcher.h"

using namespace std;

//variant 5
//lab.robota #1


int main()
{
            Worker work;
            string words = "SUN,PIES,LEMON.";
            int wordsCount = work.countWordsInString(words);

            int  * lengths = work.getArrayOfWordLengths(words);

            cout << "total words: " << wordsCount << std::endl;

            WordsSearcher searcher("dogs,sheep,PIG,on_the_wing.");
            searcher.sort();
            searcher.print();


    return 0;
}




