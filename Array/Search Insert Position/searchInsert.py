class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        for index,x in enumerate(nums):
            if x==target: #寻找到相等的元素
                return index
            if x > target:
                return index
        return index+1
