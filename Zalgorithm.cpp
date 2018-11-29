#include <list>
#include <string>
#include <vector>

#include "Zalgorithm.h"

// Input: Pattern P, text T, data structure matches to store result
//      P is 1-indexed, so we represent the pattern "abc" by P = " abc"
//      T is also 1-indexed
// Output: Indices corresponding to occurrances of P in T
void ZalgorithmBasedMatching(
        const std::string& P,
        const std::string& T,
        std::list<int>* matches) {
    std::string pt = P + "$" + T;
    std::vector<int> z;
    Zalgorithm(pt, &z);

    for (int i = P.length(); i < z.size(); i++) 
    {
        if ( (P.length() - 1) == z[i] ) 
        {
            matches->push_back(i - P.length() - 1);
        }
    }
}

// Input: String S, data structure Z to store result
//      S is 1-indexed, so we represent the string "abc" by S = " abc"
// Output: Z values
void Zalgorithm(const std::string& S, std::vector<int>* Z) {
    // dummy values
    Z->push_back(0);
    Z->push_back(0);

    for (int i = 2; i < S.length(); i++) 
    {
        Z->push_back(MatchLength(S, 1, i));
    }
}

// Input: String S, positions i and j of S
//      S is 1-indexed, so we represent the string "abc" by S = " abc"
// Output: length of longest common prefix of S[i, n] and S[j, n] where n = |S|
int MatchLength(const std::string& S, int i, int j) {
    int index = 0; // length of longest common prefix

    for (; (i + index) < S.length() && (j + index) < S.length()
            && S[i + index] == S[j + index]; index++) 
            {
    }

    return index;
}
