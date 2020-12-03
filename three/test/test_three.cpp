#define CATCH_CONFIG_MAIN
#include "../../../Catch/catch.hpp"
#include <vector>
#include <string>

#include "../lib/three.cpp"

using namespace std;

TEST_CASE("Read Input") {
    vector<string> grid = readInput("test_input2.txt");
    REQUIRE(grid.size() == 11);
}

TEST_CASE("Initial Position") {
    vector<string> grid = readInput("test_input2.txt");
    Hill hill = Hill(grid);
    REQUIRE(hill.getX() == 0);
    REQUIRE(hill.getY() == 0);
}

TEST_CASE("No tree initially") {
    vector<string> grid = readInput("test_input2.txt");
    Hill hill = Hill(grid);
    REQUIRE(hill.hasTree() == false);
}

TEST_CASE("Position changes") {
    vector<string> grid = readInput("test_input2.txt");
    Hill hill = Hill(grid);
    hill.move(3,1);
    REQUIRE(hill.getX() == 3);
    REQUIRE(hill.getY() == 1);
}

TEST_CASE("Tree after two moves") {
    vector<string> grid = readInput("test_input2.txt");
    Hill hill = Hill(grid);
    hill.move(3,1);
    hill.move(3,1);
    REQUIRE(hill.getX() == 6);
    REQUIRE(hill.getY() == 2);
    REQUIRE(hill.hasTree());
}

TEST_CASE("Reaches bottom after 10 moves") {
    vector<string> grid = readInput("test_input2.txt");
    Hill hill = Hill(grid);
    for(auto i = 0; i < 10; i++){
        hill.move(3,1);
    }
    REQUIRE(hill.atBottom());
}

TEST_CASE("X wraps after 4 moves") {
    vector<string> grid = readInput("test_input2.txt");
    Hill hill = Hill(grid);
    for(auto i = 0; i < 4; i++){
        hill.move(3,1);
    }
    REQUIRE(hill.getX() == 1);
}

TEST_CASE("Tree count is 7") {
    vector<string> grid = readInput("test_input2.txt");
    Hill hill = Hill(grid);
    int count = 0;
    while(!hill.atBottom()){
        hill.move(3,1);
        if(hill.hasTree()) { count++; }
    }
    REQUIRE(count == 7);
    REQUIRE(hill.atBottom());
}

TEST_CASE("Part 2 - 1") {
    vector<string> grid = readInput("test_input2.txt");
    Hill hill = Hill(grid);
    int count = 0;
    while(!hill.atBottom()){
        hill.move(1,1);
        if(hill.hasTree()) { count++; }
    }
    REQUIRE(count == 2);
}

TEST_CASE("Part 2 - 2") {
    vector<string> grid = readInput("test_input2.txt");
    Hill hill = Hill(grid);
    int count = 0;
    while(!hill.atBottom()){
        hill.move(3,1);
        if(hill.hasTree()) { count++; }
    }
    REQUIRE(count == 7);
}

TEST_CASE("Part 2 - 3") {
    vector<string> grid = readInput("test_input2.txt");
    Hill hill = Hill(grid);
    int count = 0;
    while(!hill.atBottom()){
        hill.move(5,1);
        if(hill.hasTree()) { count++; }
    }
    REQUIRE(count == 3);
}

TEST_CASE("Part 2 - 4") {
    vector<string> grid = readInput("test_input2.txt");
    Hill hill = Hill(grid);
    int count = 0;
    while(!hill.atBottom()){
        hill.move(7,1);
        if(hill.hasTree()) { count++; }
    }
    REQUIRE(count == 4);
}

TEST_CASE("Part 2 - 5") {
    vector<string> grid = readInput("test_input2.txt");
    Hill hill = Hill(grid);
    int count = 0;
    while(!hill.atBottom()){
        hill.move(1,2);
        if(hill.hasTree()) { count++; }
    }
    REQUIRE(count == 2);
}