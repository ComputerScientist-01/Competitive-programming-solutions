# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def detectCycle(self, head):
        slow_p = head
        fast_p = head
        start=head
        while (fast_p and fast_p.next):
            slow_p=slow_p.next
            fast_p=fast_p.next.next
            if slow_p == fast_p:
                
                while (start != slow_p):
                    start=start.next
                    slow_p=slow_p.next
                return start       
        return None
        
        """
        :type head: ListNode
        :rtype: ListNode
        """
        