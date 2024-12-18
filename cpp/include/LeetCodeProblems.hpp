#ifndef LEETCODEPROBLEMS_HPP
#define LEETCODEPROBLEMS_HPP

#include <vector>
#include <unordered_map>
#include <string>
#include <unordered_set>

class LeetCodeProblems {
public:
    std::vector<int> twoSum(const std::vector<int>& nums, int target);
    int romanToInt(const std::string& s);
    std::vector<int> twoSumII(const std::vector<int>& nums, int target);
    bool containsDuplicate(const std::vector<int>& nums);
    bool isAnagram(const std::string& s, const std::string& t);
    double nthPersonGetsNthSeat(int n);
    int scoreOfString(std::string s);
    std::vector<double> convertTemperature(double celsius);
    int finalValueAfterOperations(std::vector<std::string>& operations);
    std::vector<int> getConcatenation(std::vector<int>& nums);
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs);
};

#endif
