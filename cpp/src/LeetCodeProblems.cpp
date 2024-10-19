#include "LeetCodeProblems.hpp"
#include <map>

std::vector<int> LeetCodeProblems::twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> passed_nums;
    auto size_of_nums = nums.size();

    for (int x = 0; x < size_of_nums; x++) {
        int needed_num = target - nums[x];
        if (passed_nums.find(needed_num) != passed_nums.end()) {
            return {passed_nums[needed_num], x};
        }
        passed_nums[nums[x]] = x;
    }
    return {};
}

int LeetCodeProblems::romanToInt(const std::string& s) {  // Updated to const reference
    std::map<char, int> roman_numerals = {
        {'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50},
        {'X', 10}, {'V', 5}, {'I', 1}
    };
    int total = 0;
    for (int x = 0; x < s.length() - 1; x++) {
        int z = roman_numerals[s[x]];
        int y = roman_numerals[s[x + 1]];
        total += (z < y) ? -z : z;
    }
    total += roman_numerals[s.back()];
    return total;
}

std::vector<int> LeetCodeProblems::twoSumII(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> seen_numbers;
    auto length_of_numbers_array = nums.size();
    for (int x = 0; x < length_of_numbers_array; x++) {
        int current_number = nums[x];
        int needed_number = target - current_number;
        if (seen_numbers.find(needed_number) != seen_numbers.end()) {
            return {seen_numbers[needed_number] + 1, x + 1};
        }
        seen_numbers[current_number] = x;
    }
    return {};
}

bool LeetCodeProblems::containsDuplicate(const std::vector<int>& nums) {
    std::unordered_set<int> unique_numbers;
    for (int num : nums) {
        if (!unique_numbers.insert(num).second) {
            return true;
        }
    }
    return false;
}

bool LeetCodeProblems::isAnagram(const std::string& s, const std::string& t) {
    if (s.size() != t.size()) {
        return false;
    }
    std::unordered_map<char, int> character_count;
    for (int x = 0; x < s.size(); x++) {
        character_count[s[x]]++;
        character_count[t[x]]--;
    }
    for (const auto& count : character_count) {
        if (count.second != 0) {
            return false;
        }
    }
    return true;
}

double LeetCodeProblems::nthPersonGetsNthSeat(int n) {
    if (n != 1) {
        return 0.5000;
    }
        return 1.0000;
}

int LeetCodeProblems::scoreOfString(std::string s) {
    int total = 0;
    for (int x = 0; x < s.size() -1; x++) {
         total += abs(s[x] - s[x+1]);
    }
    return total;
}

std::vector<double> LeetCodeProblems::convertTemperature(double celsius) {
    return {celsius + 273.15, celsius * 1.80 + 32.00};
}

int LeetCodeProblems::finalValueAfterOperations(std::vector<std::string>& operations) {
    int x = 0;
    for (int i = 0; i < operations.size(); i++) {
        if (operations[i][1] == '+') {
         x++;
         continue;
        }
        x--;
    }
    return x;
}
