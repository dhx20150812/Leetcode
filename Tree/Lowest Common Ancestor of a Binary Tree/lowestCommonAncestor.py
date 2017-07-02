# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        pathP,pathQ = self.findPath(root,p),self.findPath(root,q)
        ans,x = None,0
        while x < min(len(pathP),len(pathQ)) and pathP[x] == pathQ[x]:
            ans,x = pathP[x],x+1
        return ans
        
    def findPath(self,root,target):
        stack = []
        lastVisited = None
        while root or stack:
            if root:
                stack.append(root)
                root = root.left
            else:
                peek = stack[-1]
                if peek.right and lastVisited != peek.right:
                    root = peek.right
                else:
                    if peek == target:
                        return stack
                    lastVisited = stack.pop()
                    root = None
        return stack
