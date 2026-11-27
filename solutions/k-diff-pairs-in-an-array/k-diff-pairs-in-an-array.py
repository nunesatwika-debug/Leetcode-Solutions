class Solution:
    def findPairs(self, a: List[int], k: int) -> int:
        s=set()
        for i in range(len(a)):
            for j in range(i+1,len(a)):
                if(abs(a[i]-a[j])==k):
                    s.add(tuple(sorted((a[i], a[j]))))
        return len(s)