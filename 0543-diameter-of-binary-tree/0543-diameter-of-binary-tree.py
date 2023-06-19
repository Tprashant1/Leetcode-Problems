# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def height(self,root):
        if (root==None):
            return 0
        lt=  self.height(root.left)
        rt = self.height(root.right)
        ans= max(lt,rt)+1
        return ans
    def diameterOfBinaryTree(self, root):

        """
        :type root: TreeNode
        :rtype: int
        """
        if(root==None):
            return 0
        l = self.diameterOfBinaryTree(root.left)
        r = self.diameterOfBinaryTree(root.right)
        t = self.height(root.left) + self.height(root.right)
        ans = max(l,max(r,t))
        return ans 