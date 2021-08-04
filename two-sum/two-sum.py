class Solution(object):
    def twoSum(self, nums, target):
        for i in range(len(nums)-1):
            firstnum=nums[i]
            for j in range(i+1,len(nums)):
                secondnum=nums[j]
                if firstnum+secondnum == target:
                    return [i,j]
        return []
                
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        