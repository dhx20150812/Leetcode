class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.extend(range(len(nums)+1))
        return reduce(operator.xor,nums)
