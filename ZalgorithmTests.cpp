#include "Zalgorithm.h"
#include "gtest/gtest.h"

#include <string>

using testing::Test;

// Testing MatchLength calculation when no matches occur
TEST(MatchLengthTest, NoMatchTest) {
  std::string s = " aabaacd";
  EXPECT_EQ(0, MatchLength(s, 1, 3));
}

// Testing MatchLength calculation when geginning of string matches
TEST(MatchLengthTest, BeginningStringMatch) {
  std::string s = " 12345678901234";
  EXPECT_EQ(4, MatchLength(s, 1, 11));
}

// Testing MatchLength calculation when middle of the string matches
TEST(MatchLengthTest, MidStringMatch) {
  std::string s = " 12345678901234x";
  EXPECT_EQ(3, MatchLength(s, 2, 12));
}

// Testing MatchLength calculation when match stops at end of string
TEST(MatchLengthTest, EndOfStringMatch) {
  std::string s = " 12345678901234";
  EXPECT_EQ(4, MatchLength(s, 11, 1));
}

// Testing Zalgorithm calculation with string S = " aabcaabxaaz", p.7 Gusfield
TEST(ZalgorithmTest, GusfieldExamplePageSeven) {
  std::string s = " aabcaabxaaz";
  std::vector<int> z;
  Zalgorithm(s, &z);

  EXPECT_EQ(3, z[5]);
  EXPECT_EQ(1, z[6]);
  EXPECT_EQ(0, z[7]);
  EXPECT_EQ(0, z[8]);
  EXPECT_EQ(2, z[9]);
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
