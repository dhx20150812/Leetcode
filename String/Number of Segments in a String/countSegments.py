class Solution(object):
    def countSegments(self, s):
        """
        :type s: str
        :rtype: int
        """
        a = s.split(' ')
        return len(a) - a.count('')
