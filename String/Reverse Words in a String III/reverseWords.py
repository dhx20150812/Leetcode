class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        if not s:
            return s
        arr = s.split(' ')
        for i,item in enumerate(arr):
            arr[i] = arr[i][::-1]
        return ' '.join(arr)
