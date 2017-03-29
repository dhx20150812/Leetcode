class Solution(object):
    def convertToBase7(self, num):
        """
        :type num: int
        :rtype: str
        """
        ans = '' if num>=0 else '-'
        num = abs(num)
        s = ''
        while num >= 0:
            s += str(num%7)
            num /= 7
            if num == 0:
                break
        return ans+s[::-1]
