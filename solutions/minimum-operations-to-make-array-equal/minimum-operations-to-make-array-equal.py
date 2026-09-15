class Solution:
    def minOperations(self, n: int) -> int:
        arr=[2*i+1 for i in range(n)]
        el=sum(arr)/len(arr)
        c=0
        for i in arr:
            c+=abs(i-el)
        return int(c/2)