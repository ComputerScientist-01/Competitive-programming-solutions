class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        new = list(set(nums))
        new.sort()
        nums[0:len(new)] = new
        return len(new)

        
        