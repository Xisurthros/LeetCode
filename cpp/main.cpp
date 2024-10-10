#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>


class LeetCodeProblems {
public:

	std::vector<int> twoSum(std::vector<int>& nums, int target) {
		/**
		* Returns indices of two numbers that add up to the target
		*
		* @param nums - Vector of integers
		* @param target - Target sum
		* @return Vector with two indices, or empty if no pair is found
		*/

		// Map to store seen numbers and their indices
		std::unordered_map<int, int> passed_nums = {};
		auto size_of_nums = nums.size();

		// Iterate through the vector to find the pair
		for (int x = 0; x <= size_of_nums; x++) {
			int needed_num = target - nums[x];

			// If the needed number exists in the map, return the pair of indices
			if (passed_nums.find(needed_num) != passed_nums.end()) {
				return {passed_nums[needed_num], x};
			}

			// If the needed number exists in the map, return the pair of indices
			passed_nums[nums[x]] = x;
		}

		// Return empty if no pair found
		return {};
	}
};

class LeetCodeSolutions : public LeetCodeProblems {
public:
	void run_twoSum() {
		/**
		* Runs multiple test cases for the twoSum function and verifies the results.
		*/

		// Define test cases: each contains nums vector, target sum, and expected result
		std::vector<std::tuple<std::vector<int>, int, std::vector<int>>> test_cases = {
			{ { 2 , 7 , 11 , 15 }, 9, { 0 , 1 } },
			{ { 3 , 2 , 4 }, 6, { 1 , 2 } },
			{ { 3 , 3 }, 6 , { 0 , 1 } } 
		};

		// Get the number of test cases
		int num_of_tests = test_cases.size();

		// Iterate through each test case, checking if the output matches the expected result
		for (int x = 0; x < num_of_tests; x++) {

			// Unpack the current test case into nums, target, and expected
			auto [nums, target, expected] = test_cases[x];

			// Run the twoSum function and store the output
			std::vector<int> output = twoSum(nums, target);

			// Compare output with expected result
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
	solutions.run_twoSum();

}
