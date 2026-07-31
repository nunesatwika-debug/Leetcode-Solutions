/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int n, int* returnSize) {
    int *a=(int*)malloc(sizeof(int)*n);
    *returnSize=n;
    int m=-1;
    for (int i = n - 1; i >= 0; i--) {
        a[i] = m;
        if (arr[i] > m)
            m = arr[i];
    }
    return a;
}