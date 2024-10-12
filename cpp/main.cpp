#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>


class LeetCodeProblems {
public:

	std::vector<int> twoSum(std::vector<int>& nums, int target) {

		std::unordered_map<int, int> passed_nums = {};
		auto size_of_nums = nums.size();

		for (int x = 0; x <= size_of_nums; x++) {
			int needed_num = target - nums[x];

			if (passed_nums.find(needed_num) != passed_nums.end()) {
				return {passed_nums[needed_num], x};
			}

			passed_nums[nums[x]] = x;
		}

		return {};
	}

	int romanToInt(std::string s) {
		std::map<char, int> roman_numerals = {
			{ 'M' , 1000 }, { 'D' , 500 },
			{ 'C' , 100 }, { 'L' , 50 },
			{ 'X' , 10 }, { 'V' , 5 },
			{ 'I', 1 }
		};

		int total = 0;

		for (int x = 0; x < s.length() - 1; x++) {
			int z = roman_numerals[s[x]];
			int y = roman_numerals[s[x + 1]];

			if (z < y) {
				total -= z;
				continue;
			}
			total += z;
		}
		total += roman_numerals[s.back()];

		return total;
	}
};

class LeetCodeSolutions : public LeetCodeProblems {
public:
	void run_twoSum() {
		std::vector<std::tuple<std::vector<int>, int, std::vector<int>>> test_cases = {
			{ { 2 , 7 , 11 , 15 }, 9, { 0 , 1 } },
			{ { 3 , 2 , 4 }, 6, { 1 , 2 } },
			{ { 3 , 3 }, 6 , { 0 , 1 } } 
		};

		int num_of_tests = test_cases.size();

		for (int x = 0; x < num_of_tests; x++) {

			auto [nums, target, expected] = test_cases[x];
			std::vector<int> output = twoSum(nums, target);

			if (output != expected) {
				std::cout << "ERROR: unexpected results non-matching!" << std::endl;
				continue;
			}
			std::cout << "MATCH" << std::endl;
		}
	}

	void run_romanToInt() {

		std::vector<std::tuple<std::string, int>> test_cases = {
			{ "III" , 3 },
			{ "LVIII" , 58 },
			{ "MCMXCIV" , 1994 } 
		};

		int num_of_tests = test_cases.size();

		for (int x = 0; x < num_of_tests; x++) {
			auto [s, expected] = test_cases[x];
			int output = romanToInt(s);

			if (output != expected) {
				std::cout << "ERROR: unexpected results non-matching!" << std::endl;
				continue;
			}
			std::cout << "MATCH" << std::endl;
		}

	}
};

int main(){

	LeetCodeSolutions solutions;
	solutions.run_romanToInt();

}
