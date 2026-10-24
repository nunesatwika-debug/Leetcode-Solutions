int* closestPrimes(int left, int right, int* returnSize) {
    int* ans = malloc(2 * sizeof(int));
    *returnSize = 2;
    ans[0] = ans[1] = -1;
    if (right < 2) return ans;
    char* prime = calloc(right + 1, sizeof(char));
    for (int i = 2; i <= right; i++) prime[i] = 1;
    for (long long i = 2; i * i <= right; i++)
        if (prime[i])
            for (long long j = i * i; j <= right; j += i)
                prime[j] = 0;
    int prev = -1, minDiff = INT_MAX;
    for (int i = left < 2 ? 2 : left; i <= right; i++) {
        if (prime[i]) {
            if (prev != -1 && i - prev < minDiff) {
                minDiff = i - prev;
                ans[0] = prev;
                ans[1] = i;
                if (minDiff <= 2) break;
            }
            prev = i;
        }
    }
    free(prime);
    return ans;
}