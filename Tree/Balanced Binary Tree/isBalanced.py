# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxDepth(self, root):
        if root is None :
            return 0
        return max(self.maxDepth(root.left), self.maxDepth(root.right)) + 1
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root == None:
            return True
        return abs(self.maxDepth(root.left)-self.maxDepth(root.right)) <= 1 and self.isBalanced(root.left) and self.isBalanced(root.right)
