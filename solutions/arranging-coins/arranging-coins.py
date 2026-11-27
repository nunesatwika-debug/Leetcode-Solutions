class Solution:
    def arrangeCoins(self, n: int) -> int:
        k = floor((sqrt(8.0 * n + 1) - 1) / 2)
        return k