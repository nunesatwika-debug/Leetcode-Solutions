int alternatingSubarray(int* nums, int numsSize) {
    int ans = -1, len = 1;
    for (int i = 1; i < numsSize; i++) {
        if (len == 1) {
            if (nums[i] == nums[i - 1] + 1) len = 2;
        } else if (len % 2 == 0 && nums[i] == nums[i - 1] - 1) {
            len++;
        } else if (len % 2 == 1 && nums[i] == nums[i - 1] + 1) {
            len++;
        } else {
            len = nums[i] == nums[i - 1] + 1 ? 2 : 1;
        }
        if (len >= 2 && len > ans) ans = len;
    }
    return ans;
}