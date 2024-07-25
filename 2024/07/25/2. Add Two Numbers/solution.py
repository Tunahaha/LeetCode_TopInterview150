# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        temp=0
        new_node=ListNode()
        cur=new_node
        while l1 is not None or l2 is not None or temp >0:
            if l1 is not None:
                temp=temp+l1.val
                l1=l1.next
            if l2 is not None:
                temp += l2.val
                l2 = l2.next
            cur.next=ListNode(temp%10)
            cur=cur.next
            temp=temp//10
        return new_node.next