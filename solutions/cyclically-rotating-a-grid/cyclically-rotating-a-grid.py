class Solution(object):
    def rotateGrid(self, grid, k):
        m, n = len(grid), len(grid[0])
        for layer in range(min(m, n) // 2):
            cells = []
            for j in range(layer, n - layer):
                cells.append(grid[layer][j])
            for i in range(layer + 1, m - layer - 1):
                cells.append(grid[i][n - layer - 1])
            for j in range(n - layer - 1, layer - 1, -1):
                cells.append(grid[m - layer - 1][j])
            for i in range(m - layer - 2, layer, -1):
                cells.append(grid[i][layer])
            r = k % len(cells)
            cells = cells[r:] + cells[:r]
            idx = 0
            for j in range(layer, n - layer):
                grid[layer][j] = cells[idx]
                idx += 1
            for i in range(layer + 1, m - layer - 1):
                grid[i][n - layer - 1] = cells[idx]
                idx += 1
            for j in range(n - layer - 1, layer - 1, -1):
                grid[m - layer - 1][j] = cells[idx]
                idx += 1
            for i in range(m - layer - 2, layer, -1):
                grid[i][layer] = cells[idx]
                idx += 1
        return grid