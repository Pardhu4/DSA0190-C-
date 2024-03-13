#include <iostream>
#include <vector>
bool canJump(std::vector<int>& nums) {
    int lastPos = nums.size() - 1;
    for (int i = nums.size() - 1; i >= 0; --i) {
        if (i + nums[i] >= lastPos) {
            lastPos = i;
        }
    }
    return lastPos == 0;
}
int main() {
    int arr[] = {2, 3, 1, 1, 4}; 
    std::vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0])); 
    if (canJump(nums)) {
        std::cout << "It is possible to reach the last index." << std::endl;
    } else {
        std::cout << "It is not possible to reach the last index." << std::endl;
    }
    return 0;
}

