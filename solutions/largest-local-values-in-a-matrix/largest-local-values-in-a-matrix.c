/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** largestLocal(int** grid, int gridSize, int* gridColSize, int* returnSize, int** returnColumnSizes) {
   int n = gridSize - 2;
    *returnSize = n;
    *returnColumnSizes = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        (*returnColumnSizes)[i] = n;
    }
    int **ans = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        ans[i] = (int *)malloc(n * sizeof(int));
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            int mloc=INT_MIN;
            for(int x=i;x<i+3;x++)
                for(int y=j;y<j+3;y++)
                    if(mloc<grid[x][y]) mloc=grid[x][y];
            ans[i][j]=mloc;
        }
return ans; 
}