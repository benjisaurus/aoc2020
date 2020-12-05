#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int getFive() { return 5; }

int biSearch(string s, int lower, int upper, char goLow) {
    int middle;
    for( int idx = 0; idx < s.size(); idx++) {
        middle = ((upper - lower) / 2) + lower;
        //cout << s[idx] << "\t" << lower << "\t" << middle << "\t" << upper << "\n";
        if(s[idx] == goLow){
            upper = middle;
        } else {
            lower = middle + 1;
        }
    }
    return lower;
}

int getRow(string s) {
    return biSearch(s, 0, 127, 'F');
}

int getColumn(string s) {
    return biSearch(s, 0, 7, 'L');
}

int getId(int row, int col) {
    return (row * 8) + col;
}

bool isInList(vector<int> list, int i) {
    auto p = find(list.begin(), list.end(), i);
    return p != list.end();
}

int findMissing(vector<int> list, int highest) {
    for(auto i = 1; i < highest; i++) {
        if((!isInList(list, i)) && (isInList(list, i - 1)) && (isInList(list, i + 1))) {
            return i;
        }
    }
    return 0;
}