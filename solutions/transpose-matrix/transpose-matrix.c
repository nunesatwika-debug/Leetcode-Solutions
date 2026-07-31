/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int rs, int* cs, int* returnSize, int** returnColumnSizes) {
    *returnSize = *cs;
    *returnColumnSizes = (int*)malloc(sizeof(int) * (*cs));
    int **ans = (int**)malloc(sizeof(int*) * (*cs));
    for (int i = 0; i < *cs; i++) {
        (*returnColumnSizes)[i] = rs;
        ans[i] = (int*)malloc(sizeof(int) * rs);
    }
    for(int i=0;i<*cs;i++){
        for(int j=0;j<rs;j++){
            ans[i][j]=matrix[j][i];
        }
    }
    return ans;
}