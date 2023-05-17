# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp=head
        i=0
        while temp:
            i+=1
            temp=temp.next
        if i==1:
            return head
        if i==2:
            return head.next
        head1=temp1=ListNode()
        j=0
        l=head
        while l and l.next:
            if j==(i//2):
                temp1.next=l
                temp1=temp1.next
                l=l.next

            else:
                l=l.next
                j+=1
        return head1.next

            
            

            
        