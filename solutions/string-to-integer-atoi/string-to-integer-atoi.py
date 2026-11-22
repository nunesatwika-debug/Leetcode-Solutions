class Solution:
    minnum = -2**31
    maxnum = 2**31-1
    def myAtoi(self, s: str) -> int:
        s=s.lstrip()
        if not s:
            return 0
        sign = 1
        i=0
        if s[0]=='-':
            sign = -1
            i+=1
        elif s[0]=='+':
            sign = 1
            i+=1
        return self.num(s,sign,i)
    def num(self,s,sign,i,res=0):
        if i>=len(s) or not s[i].isdigit():
            return sign * res
        res = res*10 + int(s[i])
        if sign * res <= self.minnum: return self.minnum
        if sign * res >= self.maxnum: return self.maxnum
        return self.num(s,sign,i+1,res)