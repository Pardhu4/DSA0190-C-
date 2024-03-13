#include <iostream>
#include <vector>
int maxSubArray(std::vector<int>& nums) {
    int maxSum = nums[0];
    int n = nums.size();

    for (int i = 0; i < n; ++i) {
        int currentSum = 0;
        for (int j = i; j < n; ++j) {
            currentSum += nums[j];
            maxSum = std::max(maxSum, currentSum);
        }
    }
    return maxSum;
}
int main() {
    std::vector<int> nums;
    nums.push_back(-2);
    nums.push_back(1);
    nums.push_back(-3);
    nums.push_back(4);
    nums.push_back(-1);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(-5);
    nums.push_back(4);
    int maxSum = maxSubArray(nums);
    std::cout << "Maximum subarray sum: " << maxSum << std::endl;
    return 0;
}

