# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        '''
        这部分代码出自于https://github.com/dhx20150812/Leetcode/blob/master/Linked%20List/Reverse%20Linked%20List/reverseList.py
        '''
        if head is None:
            return
        if head.next is None:
            return head
        node = self.reverseList(head.next)
        head.next.next = head
        head.next = None
        return node
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        """
        通过将链表的后半部分逆置，然后逐一和前半部分进行比较
        """
        if head is None:
            return True
        if head and head.next is None:
            return True
        fast = slow = head
        while fast and fast.next: # 快慢指针法寻找链表的中点
            fast = fast.next.next
            slow = slow.next
        if fast is None:#偶数
            mid = slow
        else:# 奇数位个
            mid = slow.next
        p = self.reverseList(mid)
        q = head
        while p: # 将前半段与后半段比较
            if p.val != q.val:
                return False
            p = p.next
            q = q.next
        return True
