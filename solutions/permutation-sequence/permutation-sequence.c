char* getPermutation(int n, int k) {
    int fact[10] = {1}, used[10] = {0};
    char* ans = malloc((n + 1) * sizeof(char));
    for (int i = 1; i <= n; i++) fact[i] = fact[i - 1] * i;
    k--;
    for (int i = 0; i < n; i++) {
        int idx = k / fact[n - 1 - i];
        k %= fact[n - 1 - i];
        int count = 0;
        for (int j = 1; j <= n; j++) {
            if (!used[j]) {
                if (count == idx) {
                    ans[i] = '0' + j;
                    used[j] = 1;
                    break;
                }
                count++;
            }
        }
    }
    ans[n] = '\0';
    return ans;
}