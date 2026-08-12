class Solution:
    def subarrayLCM(self, nums: List[int], k: int) -> int:
        from math import lcm
        cnt = 0
        n = len(nums)
        for i in range(n):
            lm = nums[i]
            if lm == k:
                cnt += 1
            for j in range(i+1, n):
                lm = lcm(lm, nums[j])
                if lm > k:
                    break
                elif lm == k:
                    cnt += 1
        return cnt
        