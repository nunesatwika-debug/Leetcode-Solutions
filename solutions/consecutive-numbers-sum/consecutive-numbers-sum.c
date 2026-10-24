int consecutiveNumbersSum(int n) {
    int count = 0;
    for (int k = 1; (long long)k * (k + 1) / 2 <= n; k++) {
        if ((n - (long long)k * (k - 1) / 2) % k == 0)
            count++;
    }
    return count;
}