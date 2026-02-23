#include <stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int robLinear(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }
    if (numsSize == 1) {
        return nums[0];
    }
    int prev2 = nums[0];
    int prev1 = max(nums[0], nums[1]);
    for (int i = 2; i < numsSize; i++) {
        int current_max = max(nums[i] + prev2, prev1);
        prev2 = prev1;
        prev1 = current_max;
    }
    return prev1;
}
int rob(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }
    if (numsSize == 1) {
        return nums[0];
    }
    int result1 = robLinear(nums, numsSize - 1);
    int result2 = robLinear(nums + 1, numsSize - 1);
    return max(result1, result2);
}
