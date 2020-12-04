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

bool isOnlyDigit(string s) {
    for(auto c : s) {
        if((c < 48) || (c > 57)) { return false; }
    }
    return true;
}

bool byrValid(string s) {
    if(s.size() != 4) { return false; }
    if(!isOnlyDigit(s)) { return false; }
    int year = stoi(s);
    return ((year > 1919) && (year < 2003));
}

bool iyrValid(string s) {
    if(s.size() != 4) { return false; }
    if(!isOnlyDigit(s)) { return false; }
    int year = stoi(s);
    return ((year > 2009) && (year < 2021));
}

bool eyrValid(string s) {
    if(s.size() != 4) { return false; }
    if(!isOnlyDigit(s)) { return false; }
    int year = stoi(s);
    return ((year > 2019) && (year < 2031));
}

bool hgtValid(string s) {
    int len = s.size();
    string unit = s.substr(len - 2, len);
    if((unit != "in") && (unit != "cm")) { return false; }
    string numStr = s.substr(0, len - 2);
    if(!isOnlyDigit(numStr)) { return false; }
    int num = stoi(numStr);
    return (((unit == "cm") && ((num > 149) && (num < 194)))
            || ((unit == "in") && ((num > 58) && (num < 77))));
}

bool hclValid(string s) {
    if(s.size() != 7) { return false; }
    if(s[0] != '#') { return false; }
    for(auto i = 1; i < s.size(); i++) {
        int c = int(s[i]);
        if((c < 48) || (c > 102) || ((c > 57) && (c < 97))) { return false; }
    }
    return true;
}

bool eclValid(string s) {
    return (
        (s == "amb") || (s == "blu") || (s == "brn") 
        || (s == "gry") || (s == "grn") || (s == "hzl") || (s == "oth")
    );
}

bool pidValid(string s) {
    if(s.size() != 9) { return false; }
    for(auto c : s) {
        if((c < 48) || (c > 57)) { return false; }
    }
    return true;
}

bool areFieldsValid(map<const string, string> p) {
    for(auto field : p) {
        if(field.first == "byr") {
            if(!byrValid(field.second)) { return false; }
        }
        if(field.first == "iyr") {
            if(!iyrValid(field.second)) { return false; }
        }
        if(field.first == "eyr") {
            if(!eyrValid(field.second)) { return false; }
        }
        if(field.first == "hgt") {
            if(!hgtValid(field.second)) { return false; }
        }
        if(field.first == "hcl") {
            if(!hclValid(field.second)) { return false; }
        }
        if(field.first == "ecl") {
            if(!eclValid(field.second)) { return false; }
        }
        if(field.first == "pid") {
            if(!pidValid(field.second)) { return false; }
        }
    }
    return true;
}
