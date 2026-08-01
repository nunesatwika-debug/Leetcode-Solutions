class Solution:
    def reverseWords(self, s: str) -> str:
        l=s.split()
        l.reverse()
        x=""
        for i in l:
            x=x+i+" "
        x=x[:-1]
        return x