#define CATCH_CONFIG_MAIN
#include "../../../Catch/catch.hpp"
#include <iostream>

#include "../lib/five.cpp"

using namespace std;

TEST_CASE("biSearch row") {
    REQUIRE(biSearch("BFFFBBF", 0, 127, 'F') == 70);
    REQUIRE(biSearch("FFFBBBF", 0, 127, 'F') == 14);
    REQUIRE(biSearch("BBFFBBF", 0, 127, 'F') == 102);
}

TEST_CASE("biSearch column") {
    REQUIRE(biSearch("RRR", 0, 7, 'L') == 7);
    REQUIRE(biSearch("RLR", 0, 7, 'L') == 5);
    REQUIRE(biSearch("RLL", 0, 7, 'L') == 4);
}

TEST_CASE("Get row") {
    REQUIRE(getRow("BFFFBBF") == 70);
    REQUIRE(getRow("FFFBBBF") == 14);
    REQUIRE(getRow("BBFFBBF") == 102);
}

TEST_CASE("Get column") {
    REQUIRE(getColumn("RRR") == 7);
    REQUIRE(getColumn("RLR") == 5);
    REQUIRE(getColumn("RLL") == 4);
}

TEST_CASE("Get id") {
    REQUIRE(getId(44, 5) == 357);
    REQUIRE(getId(14, 7) == 119);
    REQUIRE(getId(70, 7) == 567);
    REQUIRE(getId(102, 4) == 820);
}