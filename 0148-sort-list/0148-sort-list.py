# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def sortList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        
        l=[]
        while(head != None):
            l.append(head.val)
            head=head.next
        l=sorted(l)
        head1=temp1=ListNode(0)
        i=0
        while i<len(l):
            temp1.next=ListNode(l[i])
            temp1=temp1.next
            i+=1
        return head1.next
