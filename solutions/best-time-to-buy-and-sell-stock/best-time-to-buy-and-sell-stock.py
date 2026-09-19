class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        min_pr=prices[0]
        max_prof=0
        for price in prices:
            if price<min_pr:
                min_pr=price
            profit=price-min_pr
            if profit>max_prof:
                max_prof=profit
        return max_prof
        