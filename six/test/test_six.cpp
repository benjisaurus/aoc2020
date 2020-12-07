#define CATCH_CONFIG_MAIN
#include "../../../Catch/catch.hpp"
#include <iostream>

#include "../lib/six.cpp"

using namespace std;

TEST_CASE("Parse input") {
    vector<string> lines = readInFile("test_input.txt");
    vector<string> answers = parseAnswers(lines);
    vector<string> expected = {
        "abc",
        "abc",
        "abc",
        "a",
        "b"
    };

    REQUIRE(answers == expected);
}

TEST_CASE("Get counts") {
    vector<string> input1 = {
        "abc"
    };
    REQUIRE(getCounts(input1) == 3);

    vector<string> input2 = {
        "abc",
        "abc",
        "abc",
        "a",
        "b"
    };

    REQUIRE(getCounts(input2) == 11);
}

TEST_CASE("Group count") {
    vector<string> lines = readInFile("test_input.txt");
    int count = groupCount(lines);
    REQUIRE(count == 5);
}

TEST_CASE("Is char in map") {
    map<char, int> m = {
        { 'c', 1 },
        { 'b', 2 }
    };
    REQUIRE(isCharInMap(m, 'c'));
    REQUIRE(!isCharInMap(m, 'a'));
}

TEST_CASE("Get counts2") {
    vector<string> lines = readInFile("test_input.txt");
    vector<string> answers = parseAnswers2(lines);
    REQUIRE(getCounts(answers) == 6);
}