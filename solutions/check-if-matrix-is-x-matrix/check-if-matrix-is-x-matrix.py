class Solution:
    def checkXMatrix(self, grid: List[List[int]]) -> bool:
        n=len(grid)
        flag=True
        for i in range(n):
            for j in range(n):
                if(i==j or i==n-1-j):
                    if(grid[i][j]==0):
                        flag=False
                else:
                    if(grid[i][j]!=0):
                        flag=False
        return flag
