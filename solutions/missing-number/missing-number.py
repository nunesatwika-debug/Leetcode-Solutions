class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        s=sum(nums)
        n=len(nums)
        actual =n*(n+1)/2
        return int(actual-s)