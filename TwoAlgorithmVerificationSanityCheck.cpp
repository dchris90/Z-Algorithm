#include "BoyerMoore.h"
#include "Zalgorithm.h"
#include "gtest/gtest.h"

using testing::Test;

#include <algorithm>
#include <random>
#include <string>

#define NUM_TEST_CASES 10000
#define RANDOM_STRING_SIZE 100
#define RANDOM_SUBSTRING_SIZE 4

// Sanity check for BoyerMoore & ZalgorithmBasedMatching
// Does NUM_TEST_CASES times:
//    1) Generate random string T of size RANDOM_STRING_SIZE
//    2) Generate a random substring P of T
//    3) Runs BoyerMoore and ZalgorithmBasedMatching and checks results are identical
// Use <random> & uniform_int_distribution for your random number generation
TEST(TwoAlgorithmVerificationSanityCheck, SubstringMatchesInRandomString) {
  const std::string Sigma = "abcdefghijklmnopqrstuvwxyz";

  std::default_random_engine generator;
  std::uniform_int_distribution<int> letterDistribution(0, Sigma.length() - 1);
  std::uniform_int_distribution<int> substringDistribution(1, RANDOM_STRING_SIZE);

  for (int i = 0; i < NUM_TEST_CASES; i++) 
  {
    std::string T = " ";

    for (int j = 0; j < RANDOM_STRING_SIZE; j++) 
    {
      T.push_back(Sigma[letterDistribution(generator)]);
    }

    int start = substringDistribution(generator), end = substringDistribution(generator);
    
    if (start > end) 
    {
      std::swap(start, end);
    }

    std::string P = " " + T.substr(start, end);

    std::list<int> matchesBM;
    BoyerMoore(P, T, Sigma, &matchesBM);

    std::list<int> matchesZ;
    ZalgorithmBasedMatching(P, T, &matchesZ);

    EXPECT_EQ(matchesBM, matchesZ);
  }
}

// Sanity check for BoyerMoore & ZalgorithmBasedMatching
// Does NUM_TEST_CASES times:
//    1) Generate random string T of size RANDOM_STRING_SIZE
//    2) Generate a random substring P of size RANDOM_SUBSTRING_SIZE (no relationship to T)
//    3) Runs BoyerMoore and ZalgorithmBasedMatching and checks results are identical
// Use <random> & uniform_int_distribution for your random number generation
TEST(TwoAlgorithmVerificationSanityCheck, RandomSubstringVsRandomString) {
  const std::string Sigma = "abcdefghijklmnopqrstuvwxyz";

  std::default_random_engine generator;
  std::uniform_int_distribution<int> letterDistribution(0, Sigma.length() - 1);
  std::uniform_int_distribution<int> substringDistribution(1, RANDOM_STRING_SIZE);

  for (int i = 0; i < NUM_TEST_CASES; i++) 
  {
    std::string T = " ";

    for (int j = 0; j < RANDOM_STRING_SIZE; j++) 
    {
      T.push_back(Sigma[letterDistribution(generator)]);
    }

    std::string P = " ";

    for (int j = 0; j < RANDOM_SUBSTRING_SIZE; j++) 
    {
      P.push_back(Sigma[letterDistribution(generator)]);
    }

    std::list<int> matchesBM;
    BoyerMoore(P, T, Sigma, &matchesBM);

    std::list<int> matchesZ;
    ZalgorithmBasedMatching(P, T, &matchesZ);

    EXPECT_EQ(matchesBM, matchesZ);
  }
}

int main(int argc, char** argv) {
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
