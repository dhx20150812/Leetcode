class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        str = []
        for i in range(len(s)):
            if len(str) == 0:
                str.append(s[i])
            else:
                obj1 = str[-1]
                obj2 = s[i]
                if (obj1 == '(' and obj2 == ')') or (obj1 == '{' and obj2 == '}') or (obj1 == '[' and obj2 == ']'):
                    str.pop()
                else:
                    str.append(s[i])
        if len(str) == 0:
            return True
        else:
            return False
