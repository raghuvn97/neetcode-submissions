# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        count = 0
        current = head

        while current:
            count += 1
            current = current.next
        
        delnode = count - n

        if delnode == 0:
            head = head.next
            return head

        prev = None
        current = head
        for i in range(0, delnode):
            prev = current
            current = current.next
        
        prev.next = current.next
        current = None
        return head

