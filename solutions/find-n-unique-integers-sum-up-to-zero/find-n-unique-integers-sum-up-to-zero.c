/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    int *arr = (int*)malloc(n * sizeof(int));
    *returnSize = n;

    for (int i = 0; i < n / 2; i++) {
        arr[2 * i] = i + 1;
        arr[2 * i + 1] = -(i + 1);
    }

    if (n % 2 != 0) {
        arr[n - 1] = 0;
    }

    return arr;
}