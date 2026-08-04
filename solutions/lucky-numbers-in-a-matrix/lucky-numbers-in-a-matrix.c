/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize,
                  int* returnSize) {

    int cols = matrixColSize[0];

    int *ans = (int*)malloc(matrixSize * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < matrixSize; i++) {

        int minVal = INT_MAX;
        int col = 0;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];
                col = j;
            }
        }
        int isLucky = 1;

        for (int k = 0; k < matrixSize; k++) {
            if (matrix[k][col] > minVal) {
                isLucky = 0;
                break;
            }
        }

        if (isLucky)
            ans[(*returnSize)++] = minVal;
    }
    return ans;
}