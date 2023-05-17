# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        l=head
        i=0
        while(l):
            l=l.next
            i+=1
        if i==1:
            return
        temp=head
        j=0
        while temp and temp.next:
            if j==(i//2)-1:
                temp.next=temp.next.next
                j+=1
            else:
                temp=temp.next
                j+=1

        return head