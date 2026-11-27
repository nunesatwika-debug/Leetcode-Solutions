class Solution:
    def nextGreatestLetter(self, letters: list[str], target: str) -> str:
        l=[ord(i) for i in letters]
        ans=chr(l[0])
        k=ord(target)
        while(l!=[]):
            mi=min(l)
            if(k<mi):
                ans=chr(mi)
                break
            l=[i for i in l if mi != i]
        return(ans)