//lab. work #2

#include <ctype.h>
#include <iostream>
#include "consonantsfilter.h"

using namespace std;

//variant 5
//lab.robota #1


int main() {
    ConsonantsFilter cf;
    string phrase = "Hello, it's a beautiful day today.";
    string filtered = cf.getConsonantsFromEverySecondWord(phrase);
    std::cout << filtered;


    return 0;
}




