class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s = ''.join(map(str,nums))
        return max(map(len,s.split('0')))
