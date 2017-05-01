# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    global res
    def findTreePath(self, root, path):
        global res
        if root.left ==  None and root.right == None:
            res.append(str(path))
        if root.left:
            self.findTreePath(root.left,path + str(root.left.val))
        if root.right:
            self.findTreePath(root.right,path + str(root.right.val))
    def sumNumbers(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        global res
        res = []
        if not root:
            return 0
        self.findTreePath(root,str(root.val))
        return sum([int(i) for i in res])
