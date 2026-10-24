int minimumIndex(int* nums, int numsSize) {
    int candidate = 0, count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) candidate = nums[i];
        count += nums[i] == candidate ? 1 : -1;
    }
    int total = 0;
    for (int i = 0; i < numsSize; i++)
        if (nums[i] == candidate) total++;
    int left = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == candidate) left++;
        if (left * 2 > i + 1 && (total - left) * 2 > numsSize - i - 1)
            return i;
    }
    return -1;
}