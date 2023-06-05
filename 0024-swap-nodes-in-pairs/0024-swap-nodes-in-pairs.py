# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        d=ListNode(0)
        d.next=head
        c=d
        while(c.next and c.next.next):
            fi=c.next
            se=c.next.next
            fi.next=se.next
            c.next=se
            c.next.next = fi
            c=c.next.next
        return d.next
