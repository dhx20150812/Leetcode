# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        if head.next is None:
            return None
        dummy = ListNode(0)
        dummy.next = head
        p,q = dummy,head
        for i in range(n):
            q = q.next
        while q is not None:
            q = q.next
            p = p.next
        p.next = p.next.next
        return dummy.next
