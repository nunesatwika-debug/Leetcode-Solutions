class Solution:
    def setZeroes(self, matrix: list[list[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        rows=[]
        cols=[]
        i=0
        while(i<len(matrix)):
            j=0
            while(j<len(matrix[0])):
                if(matrix[i][j]==0):
                    rows.append(i)
                    cols.append(j)
                j+=1
            i+=1
        for i in rows:
            for j in range(len(matrix[0])):
                matrix[i][j]=0
        for i in cols:
            for j in range(len(matrix)):
                matrix[j][i]=0

        