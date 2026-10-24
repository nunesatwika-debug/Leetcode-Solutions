int* divisibilityArray(char* word, int m, int* returnSize) {
    int n = strlen(word);
    int* ans = malloc(n * sizeof(int));
    *returnSize = n;
    long long rem = 0;
    for (int i = 0; i < n; i++) {
        rem = (rem * 10 + word[i] - '0') % m;
        ans[i] = rem == 0 ? 1 : 0;
    }
    return ans;
}