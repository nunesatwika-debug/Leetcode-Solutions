class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        nums1=set(nums1)
        nums2=set(nums2)
        inte= nums1&nums2
        inte=list(inte)
        return inte