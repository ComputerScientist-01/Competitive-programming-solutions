class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        a=set()
        for i in nums2:
            if i in nums1:
                a.add(i)
                #nums1.pop(nums1.index(i))
        return a
        