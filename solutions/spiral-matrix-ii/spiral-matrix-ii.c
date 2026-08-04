/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {

    *returnSize = n;
    *returnColumnSizes = (int*)malloc(n * sizeof(int));

    int **ans = (int**)malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++) {
        ans[i] = (int*)malloc(n * sizeof(int));
        (*returnColumnSizes)[i] = n;
    }

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++)
            ans[top][j] = num++;
        top++;
        for (int i = top; i <= bottom; i++)
            ans[i][right] = num++;
        right--;
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                ans[bottom][j] = num++;
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                ans[i][left] = num++;
            left++;
        }
    }
    return ans;
}