class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums)<=1:
            return len(nums)
        i,k = 0,1
        while k<=len(nums)-1:
            if nums[i]!=nums[k]:
                nums[i+1],nums[k] = nums[k],nums[i+1]
                i += 1
                k += 1
            else:
                k += 1
        return i+1