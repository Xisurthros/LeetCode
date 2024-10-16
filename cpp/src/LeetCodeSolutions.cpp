#include "LeetCodeSolutions.hpp"

void LeetCodeSolutions::run_twoSum() {
    std::vector<std::tuple<std::vector<int>, int, std::vector<int>>> test_cases = {
        { {2, 7, 11, 15}, 9, {0, 1} },
        { {3, 2, 4}, 6, {1, 2} },
        { {3, 3}, 6, {0, 1} }
    };

    for (const auto& [nums, target, expected] : test_cases) {
        std::vector<int> output = twoSum(nums, target);
        if (output != expected) {
            std::cout << "ERROR: unexpected results non-matching!" << std::endl;
        } else {
            std::cout << "MATCH" << std::endl;
        }
    }
}

void LeetCodeSolutions::run_romanToInt() {
    std::vector<std::tuple<std::string, int>> test_cases = {
        {"III", 3}, {"LVIII", 58}, {"MCMXCIV", 1994}
    };

    for (const auto& [s, expected] : test_cases) {
        int output = romanToInt(s);
        if (output != expected) {
            std::cout << "ERROR: unexpected results non-matching!" << std::endl;
        } else {
            std::cout << "MATCH" << std::endl;
        }
    }
}

void LeetCodeSolutions::run_twoSumII() {
    std::vector<std::tuple<std::vector<int>, int, std::vector<int>>> test_cases = {
        { {2, 7, 11, 15}, 9, {1, 2} },
        { {2, 3, 4}, 6, {1, 3} },
        { {-1, 0}, -1, {1, 2} }
    };

    for (const auto& [nums, target, expected] : test_cases) {
        std::vector<int> output = twoSumII(nums, target);
        if (output != expected) {
            std::cout << "ERROR: unexpected results non-matching!" << std::endl;
        } else {
            std::cout << "MATCH" << std::endl;
        }
    }
}

void LeetCodeSolutions::run_containsDuplicate() {
    std::vector<std::tuple<std::vector<int>, bool>> test_cases = {
        { {1, 2, 3, 1}, true },
        { {1, 2, 3, 4}, false },
        { {1, 1, 1, 3, 3, 4, 3, 2, 4, 2}, true }
    };

    for (const auto& [nums, expected] : test_cases) {
        bool output = containsDuplicate(nums);
        if (output != expected) {
            std::cout << "ERROR: unexpected results non-matching!" << std::endl;
        } else {
            std::cout << "MATCH" << std::endl;
        }
    }
}

void LeetCodeSolutions::run_isAnagram() {
    std::vector<std::tuple<std::pair<std::string, std::string>, bool>> test_cases = {
        { {"anagram", "nagaram"}, true },
        { {"rat", "car"}, false }
    };

    for (const auto& [anagrams, expected] : test_cases) {
        bool output = isAnagram(anagrams.first, anagrams.second);
        if (output != expected) {
            std::cout << "ERROR: unexpected results non-matching!" << std::endl;
        } else {
            std::cout << "MATCH" << std::endl;
        }
    }
}
