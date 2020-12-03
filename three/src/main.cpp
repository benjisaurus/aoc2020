#include "../lib/three.cpp"
#include <iostream>

using namespace std;

int main() {
    vector<string> grid = readInput("aoc2020_input_3.txt");
    long long int product = 1;
    int right = 1;
    int down = 1;
    int count = 0;
    Hill hill = Hill(grid);
    while(!hill.atBottom()){
        hill.move(right, down);
        if(hill.hasTree()) { count++; }
    }
    cout << count << "\n";
    product = product * count;
    right = 3;
    down = 1;
    count = 0;
    hill = Hill(grid);
    while(!hill.atBottom()){
        hill.move(right, down);
        if(hill.hasTree()) { count++; }
    }
    cout << count << "\n";
    product = product * count;
    right = 5;
    down = 1;
    count = 0;
    hill = Hill(grid);
    while(!hill.atBottom()){
        hill.move(right, down);
        if(hill.hasTree()) { count++; }
    }
    cout << count << "\n";
    product = product * count;
    right = 7;
    down = 1;
    count = 0;
    hill = Hill(grid);
    while(!hill.atBottom()){
        hill.move(right, down);
        if(hill.hasTree()) { count++; }
    }
    cout << count << "\n";
    product = product * count;
    right = 1;
    down = 2;
    count = 0;
    hill = Hill(grid);
    while(!hill.atBottom()){
        hill.move(right, down);
        if(hill.hasTree()) { count++; }
    }
    cout << count << "\n";
    product = product * count;
    cout << product << "\n";
}