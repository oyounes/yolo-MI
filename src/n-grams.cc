#include "n-grams.hh"

#define min(a, b) ((a) < (b) ? (a) : (b))

NGrams::NGrams(vector< vector<string> > reviews, uint k) {
    string buffer;
            
    for (auto review : reviews) {
        unordered_map<string, uint> g;
        
        for (uint i = 0; i < review.size(); i++) {
            buffer.clear();

            for (uint j = 0; j < min(k, review.size()-i); j++) {
                buffer += review[i+j];

                if (g.find(buffer) == g.end()) {
                    g[buffer] = 1;
                } else {
                    g[buffer]++;
                }

                if (j < k - 1)
                    buffer += ',';
            }
        }
        
        grams_.push_back(g);
    }
}

unordered_map<string, uint> NGrams::frequencies(uint review) {
    return grams_[review];
}

unordered_map<string, uint> NGrams::totalFrequencies(void) {
    unordered_map<string, uint> result;

    for (uint i = 0; i < grams_.size(); i++)
        for (auto gram : grams_[i]) {
            if (result.find(gram.first) == result.end()) {
                result[gram.first] = gram.second;
            } else {
                result[gram.first]++;
            }
        }

    return result;
}
