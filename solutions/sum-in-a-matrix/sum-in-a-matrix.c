int cmp(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int matrixSum(int** nums, int numsSize, int* numsColSize) {
    int m = numsSize, n = numsColSize[0], ans = 0;
    for (int i = 0; i < m; i++)
        qsort(nums[i], n, sizeof(int), cmp);
    for (int j = 0; j < n; j++) {
        int max = 0;
        for (int i = 0; i < m; i++)
            if (nums[i][j] > max) max = nums[i][j];
        ans += max;
    }
    return ans;
}