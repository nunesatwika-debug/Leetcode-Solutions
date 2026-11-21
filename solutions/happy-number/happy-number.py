class Solution:
    def isHappy(self, n: int) -> bool:
        visited=set()
        def get_next(n):
            next_num=0
            while n:
                next_num += (n%10)**2
                n //= 10
            return next_num
        while n not in visited:   
            visited.add(n)
            n=get_next(n)
            if  n==1:
                return True
        return False