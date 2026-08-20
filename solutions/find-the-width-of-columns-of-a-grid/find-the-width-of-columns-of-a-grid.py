class Solution:
    def findColumnWidth(self, grid: List[List[int]]) -> List[int]:
        k=[0]*len(grid[0])
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                k[j]=max(k[j],len(str(grid[i][j])))
        return k