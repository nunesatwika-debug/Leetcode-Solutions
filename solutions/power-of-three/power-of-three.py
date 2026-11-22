class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        MAX = 3**19
        if n<=0:
             return False
        r = MAX % n
        if r==0:
            return True
        return False