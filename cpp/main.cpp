#include <iostream>
#include <vector>

class LeetCodeProblems {
	public:
		void printBreakLine() {
			std::cout << "=========================================================================" << std::endl;
		}

		std::vector<int> twoSum(std::vector<int>& nums, int target) {
			int x = 0;
			int y = 1;
			int size_of_nums = sizeof(nums)/sizeof(nums[0]);
			std::cout << "size_of_nums: " << size_of_nums << std::endl;

			printBreakLine();
			return nums;
		}
};

int main(){
	std::vector<int> nums_1 = {2, 7, 11, 15};
	int target_1 = 9;

	std::vector<int> nums_2 = {3, 2, 4};
	int target_2 = 6;

	std::vector<int> nums_3 = {3, 3};
	int target_3 = 6;

	LeetCodeProblems problems;
	problems.twoSum(nums_1, target_1);
	problems.twoSum(nums_2, target_2);
	problems.twoSum(nums_3, target_3);
}
