#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

vector<string> readInFile(string filename) {
    vector<string> lines;
    string str;
    ifstream input(filename.c_str());
    while(getline(input, str)) {
        lines.push_back(str);
    }

    return lines;
}

vector<string> parseAnswers(vector<string> input) {
    vector<string> answers;
    string answer = "";
    for(auto i = 0; i < input.size(); i++) {
        auto line = input[i];
        if(line != "") {
            for(auto c : input[i]) {
                string ch(1, c);
                if(answer.find(c) == string::npos){
                    answer.append(ch);
                }
            }
        }
        
        if((line == "") || (i == (input.size() - 1))) {
            answers.push_back(answer);
            answer = "";
        }
    }
    return answers;
}

bool isCharInMap(map<char, int> m, char c) {
    for(auto item : m) {
        if(item.first == c) { return true; }
    }
    return false;
}

int groupCount(vector<string> input) {
    int count = 0;
    int inSize = input.size();
    for(auto i = 0; i < inSize; i++) {
        if((input[i] == "") || (i == (input.size() - 1))) {
            count++;
        }
    }
    return count;
}

vector<string> parseAnswers2(vector<string> input) {
    vector<string> answers;
    string answer = "";
    int groupCnt = 0;
    map<char, int> currentGrp;
    for(auto i = 0; i < input.size(); i++) {
        auto line = input[i];
        if(line != "") {
            groupCnt++;
            for(auto c : input[i]) {
                if(! isCharInMap(currentGrp, c)) {
                    currentGrp[c] = 0;
                }
                currentGrp[c]++;
            }
        }
        
        if((line == "") || (i == (input.size() - 1))) {
            for(auto c : currentGrp) {
                if(c.second == groupCnt) {
                    answer.append(string(1, c.first));
                }
            }
            answers.push_back(answer);

            currentGrp = {};
            groupCnt = 0;
            answer = "";
        }
    }
    return answers;
}

int getCounts(vector<string> input) {
    int sum = 0;
    for(auto line : input) {
        sum += line.size();
    }
    return sum;
}