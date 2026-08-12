class Solution:

  def eratosthenes_sieve(self, n):
    prime, result, sqrt_n = [True] * n, [2], (int(n ** .5) + 1) | 1
    for p in range(3, sqrt_n, 2):
      if prime[p]:
        result.append(p)
        prime[p * p::p << 1] = [False] * ((n - p * p - 1) // (p << 1) + 1)

    return result + [p for p in range(sqrt_n, n, 2) if prime[p]]

  def findPrimePairs(self, n: int) -> List[List[int]]:
    primes_list = self.eratosthenes_sieve(n + 1)
    primes_set = set(primes_list)
    res = []
    for p in primes_list:
      if p > n - p:
        break
      if n - p in primes_set:
        res.append([p, n - p])
    return res