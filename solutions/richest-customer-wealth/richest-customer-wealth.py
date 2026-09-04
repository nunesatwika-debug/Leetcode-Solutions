class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxi=-1
        for i in accounts:
            if sum(i)>=maxi:
                maxi=sum(i)
        return maxi
