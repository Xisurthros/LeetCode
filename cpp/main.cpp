#include <iostream>
#include <vector>

class LeetCodeProblems {
	public:
		void printBreakLine() {
			std::cout << "=========================================================================" << std::endl;
		}

		std::vector<int> twoSum(std::vector<int>& nums, int target) {
			auto size_of_nums = nums.size();
			std::cout << "size_of_nums: " << size_of_nums << std::endl;

			for (int x = 0; x <= size_of_nums; x++) {
				int required_number = target - nums[x];
				std::cout << "Target: " << target << " Current Number:  " << nums[x] << " Required Number: " << required_number << std::endl;
				if (nums[x + 1] == required_number) {
					std::cout << nums[x+1] << std::endl;
					std::cout << "FOUND!" << std::endl;
					break;
				}
			}

			printBreakLine();
			return nums;
		}
};

class LeetCodeSolutions : public LeetCodeProblems {
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
