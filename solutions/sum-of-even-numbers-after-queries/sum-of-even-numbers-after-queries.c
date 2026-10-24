int* sumEvenAfterQueries(int* nums, int numsSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    int* ans = malloc(queriesSize * sizeof(int));
    *returnSize = queriesSize;
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
        if (nums[i] % 2 == 0) sum += nums[i];
    for (int i = 0; i < queriesSize; i++) {
        int val = queries[i][0], idx = queries[i][1];
        if (nums[idx] % 2 == 0) sum -= nums[idx];
        nums[idx] += val;
        if (nums[idx] % 2 == 0) sum += nums[idx];
        ans[i] = sum;
    }
    return ans;
}