# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        if not head:
            return head

        dummy = ListNode()
        dummy.next = head
        slow = fast = dummy

        for i in range(n):
            fast = fast.next

        while(fast.next):
            fast = fast.next
            slow = slow.next
        slow.next = slow.next.next

        return dummy.next
