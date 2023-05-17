# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int: 
        temp=head
        s=[]
        while(temp!=None):
            s.append(temp.val)
            temp=temp.next
        l=0
        r=len(s)-1
        ans=0
        res=0
        while(l<=r):
            ans=s[l]+s[r]
            if ans>res:
                res=ans
            l=l+1
            r=r-1
        return res            