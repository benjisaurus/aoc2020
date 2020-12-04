#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <map>

using namespace std;

vector<string> readInput(string filename) {
    vector<string> lines;
    vector<string> passports;
    string str;
    ifstream input(filename.c_str());
    while(getline(input, str)) {
        lines.push_back(str);
    }
    string passport = "";
    for(auto i = 0; i < lines.size(); i++) {
        if(lines[i] != ""){
            if(passport != "") { passport += " "; }
            passport += lines[i];
        }
        if((lines[i] == "") || (i == (lines.size() - 1))) {
            passports.push_back(passport);
            passport = "";
        }


    }

    return passports;
}

map<const string,string> parseFields(string s) {
    map<const string, string> pairs;
    string str;
    istringstream instream(s);
    while(getline(instream, str, ' ')) {
        string k = str.substr(0, 3);
        string v = str.substr(4, str.size());
        pairs.insert({k, v});
    }

    return pairs;
}

bool isPassportValid(map<const string, string> p) {
    return p.count("ecl") == 1 &&
        p.count("pid") == 1 &&
        p.count("eyr") == 1 &&
        p.count("hcl") == 1 &&
        p.count("byr") == 1 &&
        p.count("iyr") == 1 &&
        p.count("hgt") == 1;
}
