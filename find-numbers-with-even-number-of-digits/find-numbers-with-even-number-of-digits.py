class Solution(object):
    def findNumbers(self, nums):
        string_nums=map(str,nums)
        n=len(nums)
        count=0
        for i in range(n):    
            if (len(string_nums[i])%2==0):
                count-=-1
        return count
            
        """
        :type nums: List[int]
        :rtype: int
        """
        