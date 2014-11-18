#include <string>
#include <unordered_map>
#include <vector>

#ifndef __NGRAMS_HH__
#define __NGRAMS_HH__

using namespace std;

typedef unsigned int uint;

class NGrams {
private:
    vector< unordered_map<string, uint> > grams_;

public:
    NGrams(vector< vector<string> > reviews, uint k);

    unordered_map<string, uint> frequencies(uint review);
    unordered_map<string, uint> totalFrequencies(void);
};

#endif
