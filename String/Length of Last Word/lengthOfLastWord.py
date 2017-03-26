class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        if s.count(' ')==len(s):
            return 0
        a = s.split(' ')
        while a[-1]=='':
            del(a[-1])
        return len(a[-1])
        
