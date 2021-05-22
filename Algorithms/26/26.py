class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        for i in range(1,len(nums))[::-1]:
            if nums[i] == nums[i-1]:
                del nums[i]
        return len(nums)