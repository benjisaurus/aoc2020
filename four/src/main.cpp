#include <iostream>

#include "../lib/four.cpp"

using namespace std;

int main() {
    int count = 0;
    vector<string> input = readInput("input_four.txt");
    vector<map<const string, string>> passports;
    for(auto line : input) {
        passports.push_back(parseFields(line));
    }
    for(auto p : passports) {
        if(isPassportValid(p)) { count++; }
    }
    cout << count << "\n";
}