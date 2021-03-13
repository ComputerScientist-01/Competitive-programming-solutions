class Solution(object):
    def sortedSquares(self, nums):
        for i in range(len(nums)):
            if(nums[i]<0):
                nums[i]=nums[i]*(-1)
        nums.sort()
        for i in range(len(nums)):
            nums[i]=nums[i]*nums[i]
        return nums
        
                
        """
        :type nums: List[int]
        :rtype: List[int]
        """