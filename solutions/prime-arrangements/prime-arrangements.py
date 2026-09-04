class Solution:
    def isPrime(self,n):
        if n<2:
            return False
        for i in range(2,int(n**0.5)+1):
            if n%i==0:
                return False
        return True
    def numPrimeArrangements(self, n: int) -> int:
        c=0
        mod=10**9+7
        for i in range(2,n+1):
            if (self.isPrime(i)):
                c+=1
        return (math.factorial(c)*math.factorial(n-c)) % mod