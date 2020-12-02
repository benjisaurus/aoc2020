#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

bool numInVec(const int &num, const vector<int> &nums) {
    return (find(nums.begin(), nums.end(), num) != nums.end());
}

vector<int> find2Num(const int &target, const vector<int> &nums) {
    vector<int> results;
    for(auto num : nums) {
       int num2 = target - num;
       if(numInVec(num2, nums)) {
           results.push_back(num);
           results.push_back(num2);
           break;
       }
   }
   return results;
}

vector<int> find3Num(const int &target, const vector<int> &nums) {
    vector<int> results;
    for(auto num : nums) {
        int num1 = num;
        int left = target - num1;
        results = find2Num(left, nums);
        if(results.size() == 2) {
            results.push_back(num1);
            break;
        }
    }
    return results;
}

int main() {
   vector<int> nums;
   const string filename = "aoc2020_input_1.txt";
   string str;
   ifstream input(filename.c_str());
   while(getline(input, str)) {
       if(str.size() > 0) {
           int num = stoi(str);
           nums.push_back(num);
       }
   }

   vector<int> results = find2Num(2020, nums);
   for(auto n : results) {
       cout << n << " ";
   }
   cout <<  results[0] * results[1] <<"\n";

   vector<int> results2 = find3Num(2020, nums);
   for(auto n : results2) {
       cout << n << " ";
   }
   cout << results2[0] * results2[1] * results2[2] << "\n";
}