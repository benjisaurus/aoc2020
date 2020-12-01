#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

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

   for(auto num : nums) {
       int num2 = 2020 - num;
       if(find(nums.begin(), nums.end(), num2) != nums.end()) {
           int product = num * num2;
           cout << num << " " << num2 << " " << product << "\n";
       }
   }
}