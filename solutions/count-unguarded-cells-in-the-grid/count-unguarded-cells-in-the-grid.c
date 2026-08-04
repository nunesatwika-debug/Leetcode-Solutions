int countUnguarded(int m, int n,
                   int** guards, int guardsSize, int* guardsColSize,
                   int** walls, int wallsSize, int* wallsColSize) {

    int **grid = (int**)malloc(m * sizeof(int*));

    for (int i = 0; i < m; i++) {
        grid[i] = (int*)calloc(n, sizeof(int));
    }

    // 1 = Guard, 2 = Wall
    for (int i = 0; i < guardsSize; i++)
        grid[guards[i][0]][guards[i][1]] = 1;

    for (int i = 0; i < wallsSize; i++)
        grid[walls[i][0]][walls[i][1]] = 2;

    int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

    for (int g = 0; g < guardsSize; g++) {

        int r = guards[g][0];
        int c = guards[g][1];

        for (int d = 0; d < 4; d++) {

            int x = r + dir[d][0];
            int y = c + dir[d][1];

            while (x >= 0 && x < m &&
                   y >= 0 && y < n &&
                   grid[x][y] != 1 &&
                   grid[x][y] != 2) {

                grid[x][y] = 3;      // guarded
                x += dir[d][0];
                y += dir[d][1];
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 0)
                ans++;
        }
        free(grid[i]);
    }

    free(grid);

    return ans;
}