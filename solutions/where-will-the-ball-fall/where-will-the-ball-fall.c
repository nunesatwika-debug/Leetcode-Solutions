int* findBall(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int m = gridSize, n = gridColSize[0];
    int* ans = malloc(n * sizeof(int));
    *returnSize = n;
    for (int j = 0; j < n; j++) {
        int col = j;
        for (int i = 0; i < m; i++) {
            int next = col + grid[i][col];
            if (next < 0 || next >= n || grid[i][next] != grid[i][col]) {
                col = -1;
                break;
            }
            col = next;
        }
        ans[j] = col;
    }
    return ans;
}