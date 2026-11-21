class Solution:
    def resultGrid(self, image: List[List[int]], threshold: int) -> List[List[int]]:
        m,n=len(image),len(image[0])
        sums=[[0]*n for _ in range(m)]
        counts=[[0]*n for _ in range(m)]
        for i in range(m-2):
            for j in range(n-2):
                valid=True
                for r in range(i,i+3):
                    for c in range(j,j+3):
                        if c<j+2 and abs(image[r][c]-image[r][c+1])>threshold:
                            valid=False
                        if r<i+2 and abs(image[r][c]-image[r+1][c])>threshold:
                            valid=False
                if valid:
                    avg=sum(image[r][c] for r in range(i,i+3) for c in range(j,j+3))//9
                    for r in range(i,i+3):
                        for c in range(j,j+3):
                            sums[r][c]+=avg
                            counts[r][c]+=1
        result=[row[:] for row in image]
        for i in range(m):
            for j in range(n):
                if counts[i][j]:
                    result[i][j]=sums[i][j]//counts[i][j]
        return result