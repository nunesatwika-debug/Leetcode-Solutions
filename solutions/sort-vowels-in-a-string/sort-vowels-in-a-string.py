class Solution:
    def sortVowels(self, s: str) -> str:
        t=list(s)
        n=""
        l=[]
        for i in t:
            if(i in "aeiouAEIOU"):
                n=n+"$"
                l.append(i)
            else:
                n=n+i
        l.sort()
        j=0
        n=list(n)
        ans=""
        for i in n:
            if(i=="$"):
                i=l[j]
                j+=1
            ans+=i
        return ans