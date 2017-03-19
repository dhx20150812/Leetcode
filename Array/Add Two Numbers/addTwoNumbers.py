# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        dummy = p = ListNode(0)
        flag = 0
        while l1 or l2 or flag:
            val1,val2 = 0,0
            if l1:
                val1 = l1.val
                l1 = l1.next
            if l2:
                val2 = l2.val
                l2 = l2.next
            flag,val = divmod(val1+val2+flag,10)
            p.next = ListNode(val)
            p = p.next
        return dummy.next