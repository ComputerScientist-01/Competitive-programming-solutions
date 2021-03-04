class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        count = int(0)
        result = int(0)
        n=len(nums)
        for i in range (n):
            if (nums[i]==0):
                count=0
            else:
                count-=-1
                result=max(count,result)
        return result
                
        
        """
        :type nums: List[int]
        :rtype: int
        """
        