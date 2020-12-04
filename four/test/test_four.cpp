#define CATCH_CONFIG_MAIN
#include "../../../Catch/catch.hpp"
#include <map>
#include <iostream>

#include "../lib/four.cpp"

using namespace std;

TEST_CASE("Test input has 4 records") {
    vector<string> passports = readInput("test_input.txt");
    REQUIRE(passports.size() == 4);
}

TEST_CASE("Parse fields") {
    string line = "ecl:gry pid:860033327 eyr:2020 hcl:#fffffd";
    map<const string, string> fields = parseFields(line);
    // for(auto k : fields) {
    //     cout << k.first << "\t" << k.second << "\n";
    // }
    REQUIRE(fields.size() == 4);
    REQUIRE(fields["ecl"] == "gry");
    REQUIRE(fields["pid"] == "860033327");
    REQUIRE(fields["eyr"] == "2020");
    REQUIRE(fields["hcl"] == "#fffffd");
}

TEST_CASE("Parsing Input gives 4 passport maps") {
    vector<string> input = readInput("test_input.txt");
    vector<map<const string, string>> passports;
    for(auto line : input) {
        passports.push_back(parseFields(line));
    }

    REQUIRE(passports.size() == 4);

    map<const string, string> p = passports[0];
    REQUIRE(p.size() == 8);
    REQUIRE(p["ecl"] == "gry");
    REQUIRE(p["pid"] == "860033327");
    REQUIRE(p["eyr"] == "2020");
    REQUIRE(p["hcl"] == "#fffffd");
    REQUIRE(p["byr"] == "1937");
    REQUIRE(p["iyr"] == "2017");
    REQUIRE(p["cid"] == "147");
    REQUIRE(p["hgt"] == "183cm");
}

TEST_CASE("First and third passports are valid") {
    vector<string> input = readInput("test_input.txt");
    vector<map<const string, string>> passports;
    for(auto line : input) {
        passports.push_back(parseFields(line));
    }

    REQUIRE(isPassportValid(passports[0]));
    REQUIRE(!isPassportValid(passports[1]));
    REQUIRE(isPassportValid(passports[2]));
    REQUIRE(!isPassportValid(passports[3]));
}