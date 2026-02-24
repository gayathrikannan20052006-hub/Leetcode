#include <stdlib.h>
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int)); 
    int index = 0;
    for (int i = 0; i < numsSize; i++) {
        int absValue = abs(nums[i]);
        if (nums[absValue - 1] < 0) {
            result[index++] = absValue; 
        } else {
            nums[absValue - 1] *= -1; 
        }
    }
    *returnSize = index; 
    return result;
}
