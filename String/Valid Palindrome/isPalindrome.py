class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        a = [i for i in s.lower() if i.isdigit() or i.isalpha()]
        return a[::-1] == a
