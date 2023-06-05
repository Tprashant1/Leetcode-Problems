# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertionSortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp=head
        l=[]
        while(temp != None):
            l.append(temp.val)
            temp=temp.next
        l=sorted(l)
        head1=temp1=ListNode(0)
        i=0
        while(i!=len(l)):
            temp1.next=ListNode(l[i])
            temp1=temp1.next
            i+=1
        return head1.next

