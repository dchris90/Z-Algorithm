

Below is a sample run output for:
> ZalgorithmTests 							(from 'make')
> BoyerMoorePreprocessingTests 				(from 'make')
> ./ZalgorithmSanityCheck 					(from build folder)
> ./BoyerMooreSanityCheck 					(from build folder)
> ./TwoAlgorithmVerificationSanityCheck 	(from build folder)




Running ZalgorithmTests
[==========] Running 5 tests from 2 test cases.
[----------] Global test environment set-up.
[----------] 4 tests from MatchLengthTest
[ RUN      ] MatchLengthTest.NoMatchTest
[       OK ] MatchLengthTest.NoMatchTest (0 ms)
[ RUN      ] MatchLengthTest.BeginningStringMatch
[       OK ] MatchLengthTest.BeginningStringMatch (0 ms)
[ RUN      ] MatchLengthTest.MidStringMatch
[       OK ] MatchLengthTest.MidStringMatch (0 ms)
[ RUN      ] MatchLengthTest.EndOfStringMatch
[       OK ] MatchLengthTest.EndOfStringMatch (0 ms)
[----------] 4 tests from MatchLengthTest (1 ms total)

[----------] 1 test from ZalgorithmTest
[ RUN      ] ZalgorithmTest.GusfieldExamplePageSeven
[       OK ] ZalgorithmTest.GusfieldExamplePageSeven (0 ms)
[----------] 1 test from ZalgorithmTest (0 ms total)

[----------] Global test environment tear-down
[==========] 5 tests from 2 test cases ran. (1 ms total)
[  PASSED  ] 5 tests.




Running BoyerMoorePreprocessingTests
[==========] Running 6 tests from 4 test cases.
[----------] Global test environment set-up.
[----------] 1 test from CalculateCapitalLprimeTest
[ RUN      ] CalculateCapitalLprimeTest.GusfieldExamplePageTwenty
[       OK ] CalculateCapitalLprimeTest.GusfieldExamplePageTwenty (0 ms)
[----------] 1 test from CalculateCapitalLprimeTest (1 ms total)

[----------] 1 test from CalculateLowercaseLprimeTest
[ RUN      ] CalculateLowercaseLprimeTest.Pattern_dabcdbdab
[       OK ] CalculateLowercaseLprimeTest.Pattern_dabcdbdab (0 ms)
[----------] 1 test from CalculateLowercaseLprimeTest (0 ms total)

[----------] 1 test from CalculateNTest
[ RUN      ] CalculateNTest.GusfieldExamplePageTwentyOne
[       OK ] CalculateNTest.GusfieldExamplePageTwentyOne (0 ms)
[----------] 1 test from CalculateNTest (0 ms total)

[----------] 3 tests from CalculateRTest
[ RUN      ] CalculateRTest.EmptyPattern
[       OK ] CalculateRTest.EmptyPattern (0 ms)
[ RUN      ] CalculateRTest.SingleCharacterPattern
[       OK ] CalculateRTest.SingleCharacterPattern (0 ms)
[ RUN      ] CalculateRTest.RepeatedCharacterPattern
[       OK ] CalculateRTest.RepeatedCharacterPattern (0 ms)
[----------] 3 tests from CalculateRTest (1 ms total)

[----------] Global test environment tear-down
[==========] 6 tests from 4 test cases ran. (2 ms total)
[  PASSED  ] 6 tests.




./ZalgorithmSanityCheck
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from ZalgorithmSanityCheck
[ RUN      ] ZalgorithmSanityCheck.SubstringMatchesInRandomString
[       OK ] ZalgorithmSanityCheck.SubstringMatchesInRandomString (235 ms)
[----------] 1 test from ZalgorithmSanityCheck (235 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test case ran. (236 ms total)
[  PASSED  ] 1 test.




./BoyerMooreSanityCheck
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from BoyerMooreSanityCheck
[ RUN      ] BoyerMooreSanityCheck.SubstringMatchesInRandomString
[       OK ] BoyerMooreSanityCheck.SubstringMatchesInRandomString (424 ms)
[----------] 1 test from BoyerMooreSanityCheck (424 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test case ran. (425 ms total)
[  PASSED  ] 1 test.




./TwoAlgorithmVerificationSanityCheck
[==========] Running 2 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 2 tests from TwoAlgorithmVerificationSanityCheck
[ RUN      ] TwoAlgorithmVerificationSanityCheck.SubstringMatchesInRandomString
[       OK ] TwoAlgorithmVerificationSanityCheck.SubstringMatchesInRandomString (544 ms)
[ RUN      ] TwoAlgorithmVerificationSanityCheck.RandomSubstringVsRandomString
[       OK ] TwoAlgorithmVerificationSanityCheck.RandomSubstringVsRandomString (381 ms)
[----------] 2 tests from TwoAlgorithmVerificationSanityCheck (925 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test case ran. (925 ms total)
[  PASSED  ] 2 tests.



