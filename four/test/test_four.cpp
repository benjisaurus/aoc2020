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

TEST_CASE("Byr Valid") {
    REQUIRE(byrValid("2002"));
    REQUIRE(!byrValid("2003"));
}

TEST_CASE("iyr Valid") {
    REQUIRE(iyrValid("2010"));
    REQUIRE(iyrValid("2020"));
    REQUIRE(iyrValid("2015"));
    REQUIRE(!iyrValid("2009"));
    REQUIRE(!iyrValid("2021"));
}

TEST_CASE("eyr Valid") {
    REQUIRE(eyrValid("2020"));
    REQUIRE(eyrValid("2030"));
    REQUIRE(eyrValid("2025"));
    REQUIRE(!eyrValid("2019"));
    REQUIRE(!eyrValid("2031"));
}

TEST_CASE("hgt Valid") {
    REQUIRE(hgtValid("60in"));
    REQUIRE(hgtValid("190cm"));
    REQUIRE(!hgtValid("190in"));
    REQUIRE(!hgtValid("190"));
}

TEST_CASE("hcl Valid") {
    REQUIRE(hclValid("#123abc"));
    REQUIRE(!hclValid("#123abz"));
    REQUIRE(!hclValid("123abc"));
    REQUIRE(!hclValid("#123abcd"));
}

TEST_CASE("ecl Valid") {
    REQUIRE(eclValid("brn"));
    REQUIRE(!eclValid("wat"));
}

TEST_CASE("pid Valid") {
    REQUIRE(pidValid("000000001"));
    REQUIRE(!pidValid("0123456789"));
}

TEST_CASE("All Invalid Passports") {
    vector<string> input = { "eyr:1972 cid:100 hcl:#18171d ecl:amb hgt:170 pid:186cm iyr:2018 byr:1926"
        , "iyr:2019 hcl:#602927 eyr:1967 hgt:170cm ecl:grn pid:012533040 byr:1946"
        , "hcl:dab227 iyr:2012 ecl:brn hgt:182cm pid:021572410 eyr:2020 byr:1992 cid:277"
        , "hgt:59cm ecl:zzz eyr:2038 hcl:74454a iyr:2023 pid:3556412378 byr:2007"
    };
    vector<map<const string, string>> passports;
    for(auto line : input) {
        passports.push_back(parseFields(line));
    }
    REQUIRE(!areFieldsValid(passports[0]));
    REQUIRE(!areFieldsValid(passports[1]));
    REQUIRE(!areFieldsValid(passports[2]));
    REQUIRE(!areFieldsValid(passports[3]));
}

TEST_CASE("All Valid Passports") {
    vector<string> input = { "pid:087499704 hgt:74in ecl:grn iyr:2012 eyr:2030 byr:1980 hcl:#623a2f"
        ,"eyr:2029 ecl:blu cid:129 byr:1989 iyr:2014 pid:896056539 hcl:#a97842 hgt:165cm"
        ,"hcl:#888785 hgt:164cm byr:2001 iyr:2015 cid:88 pid:545766238 ecl:hzl eyr:2022"
        ,"iyr:2010 hgt:158cm hcl:#b6652a ecl:blu byr:1944 eyr:2021 pid:093154719"
    };
    vector<map<const string, string>> passports;
    for(auto line : input) {
        passports.push_back(parseFields(line));
    }
    REQUIRE(areFieldsValid(passports[0]));
    REQUIRE(areFieldsValid(passports[1]));
    REQUIRE(areFieldsValid(passports[2]));
    REQUIRE(areFieldsValid(passports[3]));
}