class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        ans=[]
        for i in nums1:
            if i in nums2:
                ans.append(i)

        return list(set(ans))
                
        