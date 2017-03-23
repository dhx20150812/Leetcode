# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        if headA is None or headB is None:
            return None
        p = headA
        while p.next:
            p = p.next
        p.next = headB
        fast = slow = headA
        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next
            if fast==slow:
                mark = fast
                break
        if not fast or not fast.next:
            p.next = None
            return None
        else:
            start = headA
            while start != mark:
                start = start.next
                mark = mark.next
            p.next = None
            return mark
