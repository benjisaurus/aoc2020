#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int parseMin(string s) {
    string str = s.substr(0, s.find("-"));
    return stoi(str);
}

int parseMax(string s) {
    int dashIdx = s.find("-");
    int firstSpace = s.find_first_of(" ");
    string str = s.substr(dashIdx + 1, firstSpace);
    return stoi(str);
}

char parseLetter(string s) {
    int colonIdx = s.find(":");
    return s.substr(colonIdx - 1, colonIdx).c_str()[0];
}

string parsePass(string s) {
    int colonIdx = s.find(":");
    return s.substr(colonIdx + 2, s.size());
}

int countChar(char c, string s) {
    int count = 0;
    for(auto letter : s) {
        if(letter == c) { count++; }
    }
    return count;
}

int main() {
    const string filename = "aoc2020_input_2.txt";
    int badCount = 0;
    int goodCount = 0;
    string str;
    ifstream input(filename.c_str());
    while(getline(input, str)) {
        int min = parseMin(str);
        int max = parseMax(str);
        char letter = parseLetter(str);
        string pass = parsePass(str);
        int charCount = countChar(letter, pass);
        bool isBad = (charCount < min) || (charCount > max);
        if(isBad) { 
            badCount++;
        } else {
            goodCount++;
        }
        //cout << str << "\t" << min << "\t" << max << "\t" << letter << "\t" << pass << "\t" << charCount << "\t" << isBad << "\t" << badCount << "\n";
    }
    cout << goodCount << "\n";
}