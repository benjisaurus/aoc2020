#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

#include "../lib/five.cpp"

using namespace std;

int main() {
    string filename = "input5.txt";
    vector<string> boardingPasses;
    string str;
    ifstream input(filename.c_str());
    while(getline(input, str)) {
        boardingPasses.push_back(str);
    }
    int highest = 0;
    vector<int> seatIds;
    for(auto pass : boardingPasses) {
        string rowStr = pass.substr(0, 7);
        string colStr = pass.substr(7, pass.size());
        int row = getRow(rowStr);
        int col = getColumn(colStr);
        int id = getId(row, col);
        if(id > highest) { highest = id; }
        seatIds.push_back(id);
    }

    cout << highest << "\n";

    cout << findMissing(seatIds, highest) << "\n";
}