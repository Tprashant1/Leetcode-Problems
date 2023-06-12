# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        l=[]
        stk=[root]
        while (stk):
            node=stk.pop()
            if node:
                l.append(node.val)
                if node.right:
                    stk.append(node.right)
                if node.left:
                    stk.append(node.left)
        return l