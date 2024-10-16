#ifndef LEETCODEPROBLEMS_HPP
#define LEETCODEPROBLEMS_HPP

#include <vector>
#include <unordered_map>
#include <string>
#include <unordered_set>

class LeetCodeProblems {
public:
    std::vector<int> twoSum(const std::vector<int>& nums, int target);  // Updated to const
    int romanToInt(const std::string& s);  // Updated to const reference   int romanToInt(std::string s);
    std::vector<int> twoSumII(const std::vector<int>& nums, int target);  // Updated to const
    bool containsDuplicate(const std::vector<int>& nums);  // Updated to const
    bool isAnagram(const std::string& s, const std::string& t);
};

#endif // LEETCODEPROBLEMS_HPP


