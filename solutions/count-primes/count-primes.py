class Solution:
    def countPrimes(self, n: int) -> int:
        l=[]
        if n<=2:
            return 0
        else:
            l=[True for i in range(0,n)]
            l[0]=l[1]=False
            i=2
            cnt=n-2
            while(i*i<n):
                if(l[i]):
                    for j in range(i*i,n,i):
                        if(l[j]):
                            l[j]=False
                            cnt-=1
                i+=1
            return cnt
                