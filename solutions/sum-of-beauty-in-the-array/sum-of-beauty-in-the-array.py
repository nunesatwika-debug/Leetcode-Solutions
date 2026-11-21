class Solution:
    def sumOfBeauties(self, nums: list[int]) -> int:
        n=len(nums)
        suffix=[0]*n
        suffix[-1]=nums[-1]
        for i in range(n-2,-1,-1):
            suffix[i]=min(nums[i],suffix[i+1])
        maxi=nums[0]
        ans=0
        for i in range(1,n-1):
            if(maxi<nums[i]<suffix[i+1]):
                ans+=2
            elif(nums[i-1]<nums[i]<nums[i+1]):
                ans+=1
            maxi=max(maxi,nums[i])
        return ans