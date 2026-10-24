int longestAlternatingSubarray(int* nums, int numsSize, int threshold) {
    int ans = 0, len = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > threshold || nums[i] % 2 != 0) {
            len = 0;
        } else {
            len = 1;
            int j = i + 1;
            while (j < numsSize && nums[j] <= threshold && nums[j] % 2 != nums[j - 1] % 2) {
                len++;
                j++;
            }
            if (len > ans) ans = len;
            i = j - 1;
        }
    }
    return ans;
}