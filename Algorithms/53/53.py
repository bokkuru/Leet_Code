class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        dp = []
        dp.append(nums[0])
        for i in nums[1:]:
            if dp[-1] < 0:
                dp.append(i)
            else:
                dp.append(dp[-1]+i)
        return max(dp)