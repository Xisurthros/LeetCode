#include <iostream>
#include <vector>
#include <unordered_map>

class LeetCodeProblems {
	public:
		void printBreakLine() {
			std::cout << "=========================================================================" << std::endl;
		}

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
					std::cout << '{' << passed_nums[needed_num] << ',' << x << '}' << std::endl;
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
	// Testing functions based on given paramaters in LeetCode

	public:
		void run_twoSum() {
			
			std::vector<int> nums_1 = {2, 7, 11, 15};
			int target_1 = 9;

			std::vector<int> nums_2 = {3, 2, 4};
			int target_2 = 6;

			std::vector<int> nums_3 = {3, 3};
			int target_3 = 6;
			
			twoSum(nums_1, target_1);
			twoSum(nums_2, target_2);
			twoSum(nums_3, target_3);
		}
};

int main(){

	LeetCodeSolutions solutions;
	solutions.run_twoSum();

}
