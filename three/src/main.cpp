#include "../lib/three.cpp"
#include <iostream>

using namespace std;

int main() {
    vector<string> grid = readInput("aoc2020_input_3.txt");
    Hill hill = Hill(grid);
    int count = 0;
    while(!hill.atBottom()){
        hill.move(3,1);
        if(hill.hasTree()) { count++; }
    }
    cout << count << "\n";
}