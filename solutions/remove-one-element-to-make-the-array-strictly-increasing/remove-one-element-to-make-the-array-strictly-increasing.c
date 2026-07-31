bool canBeIncreasing(int* nums, int numsSize) {
    int removed = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] <= nums[i - 1]) {
            removed++;
            if (removed > 1)
                return false;

            if (i > 1 && nums[i] <= nums[i - 2])
                nums[i] = nums[i - 1];
        }
    }

    return true;
}