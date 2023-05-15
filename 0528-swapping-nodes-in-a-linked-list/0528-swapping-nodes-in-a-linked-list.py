# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        temp=head
        r=[]
        while(temp!=None):
            r.append(temp.val)
            temp=temp.next
        r[k-1],r[-k]=r[-k],r[k-1]
        head1=temp1=ListNode(0)
        i=0
        while(i!=len(r)):
            temp1.next=ListNode(r[i])
            temp1=temp1.next
            i+=1
        return head1.next

