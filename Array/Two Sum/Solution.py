class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for ii in range(len(nums)):
            if (target-nums[ii]) in nums:
                if ii == nums.index(target-nums[ii]):
                    pass
                else:
                    return [ii,nums.index(target-nums[ii])]
