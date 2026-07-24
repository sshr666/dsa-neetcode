# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None
        curr = head
    
        while curr:
            next_node = curr.next  # 1. Save reference to next
            curr.next = prev       # 2. Reverse pointer
            prev = curr            # 3. Advance prev
            curr = next_node       # 4. Advance curr
        
        return prev  # 'prev' is the new head