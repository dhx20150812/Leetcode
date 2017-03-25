class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        # 解题思路见隔壁C语言写法
        cnt = 0
        for x in nums:
            x = x if x>0 else -x
            if nums[x-1]>0:
                cnt += 1
                nums[x-1] = -nums[x-1]
        ret = [index+1 for index,x in enumerate(nums) if x>0]
        return ret
