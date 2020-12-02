#define CATCH_CONFIG_MAIN

#include "catch_amalgamated.hpp"
#include <string>
#include "two.cpp"

using namespace std;

TEST_CASE("Parse Min") {
    string input = "1-3 a: abcde";
    int expected = 1;
    int actual = parseMin(input);
    REQUIRE(expected == actual);
}

TEST_CASE("Parse Max") {
    string input = "1-3 a: abcde";
    int expected = 3;
    int actual = parseMax(input);
    REQUIRE(expected == actual);
}

TEST_CASE("Parse Letter") {
    string input = "1-3 a: abcde";
    char expected = 'a';
    char actual = parseLetter(input);
    REQUIRE(expected == actual);
}

TEST_CASE("Parse Pass") {
    string input = "1-3 a: abcde";
    string expected = "abcde";
    string actual = parsePass(input);
    REQUIRE(expected == actual);
}

TEST_CASE("Count Char") {
    string input = "abcde";
    int expected = 1;
    int actual = countChar('a', input);
    REQUIRE(expected == actual);
}

TEST_CASE("Good Pass Part 2") {
    string input1 = "abcde";
    string input2 = "cdefg";
    string input3 = "ccccccccc";
    bool exp1 = true;
    bool exp2 = false;
    bool exp3 = false;
    bool actual1 = isGoodPart2(1, 3, 'a', input1);
    bool actual2 = isGoodPart2(1, 3, 'b', input2);
    bool actual3 = isGoodPart2(2, 9, 'c', input3);
    REQUIRE(exp1 == actual1);
    REQUIRE(exp2 == actual2);
    REQUIRE(exp3 == actual3);
}