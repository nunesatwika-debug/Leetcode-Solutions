int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int cmp(const void* a, const void* b) {
    long long x = *(const long long*)a;
    long long y = *(const long long*)b;
    return (x > y) - (x < y);
}

long long makeSubKSumEqual(int* arr, int arrSize, int k) {
    int g = gcd(arrSize, k);
    long long ans = 0;
    long long* temp = malloc(arrSize * sizeof(long long));
    int visited[arrSize];
    for (int i = 0; i < arrSize; i++) visited[i] = 0;
    for (int i = 0; i < arrSize; i++) {
        if (visited[i]) continue;
        int count = 0, j = i;
        while (!visited[j]) {
            visited[j] = 1;
            temp[count++] = arr[j];
            j = (j + k) % arrSize;
        }
        qsort(temp, count, sizeof(long long), cmp);
        long long median = temp[count / 2];
        for (int t = 0; t < count; t++) {
            long long diff = temp[t] - median;
            ans += diff < 0 ? -diff : diff;
        }
    }
    free(temp);
    return ans;
}