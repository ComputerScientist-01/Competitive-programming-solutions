class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        a=list()
        for i in nums2:
            if i in nums1:
                a.append(i)
                nums1.pop(nums1.index(i))
        return a
    
    
    