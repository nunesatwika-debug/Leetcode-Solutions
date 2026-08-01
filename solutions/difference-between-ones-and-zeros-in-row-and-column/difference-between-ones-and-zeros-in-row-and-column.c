/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** onesMinusZeros(int** grid, int m, int* gridColSize, int* returnSize, int** returnColumnSizes) {
    int cols = *gridColSize;
    *returnSize = m;
    *returnColumnSizes = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
        (*returnColumnSizes)[i] = cols;
    int **ans = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
        ans[i] = (int *)malloc(cols * sizeof(int));
    int *rowOnes = (int *)calloc(m, sizeof(int));
    int *colOnes = (int *)calloc(cols, sizeof(int));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                rowOnes[i]++;
                colOnes[j]++;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < cols; j++) {
            ans[i][j] = 2 * rowOnes[i] + 2 * colOnes[j] - m - cols;
        }
    }
    return ans;
}