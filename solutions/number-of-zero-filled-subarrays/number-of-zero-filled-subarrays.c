long long zeroFilledSubarray(int* nums, int numsSize) {
    long long count = 0, ans = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            count++;
            ans += count;
        } else {
            count = 0;
        }
    }
    return ans;
}