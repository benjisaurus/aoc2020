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