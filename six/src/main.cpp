#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "../lib/six.cpp"

int main() {
    vector<string> lines = readInFile("input6.txt");
    vector<string> answers = parseAnswers(lines);
    int count = getCounts(answers);
    cout << count << "\n";
    vector<string> answers2 = parseAnswers2(lines);
    int count2 = getCounts(answers2);
    cout << count2 << "\n";
}