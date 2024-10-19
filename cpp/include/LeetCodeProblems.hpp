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
};

#endif
