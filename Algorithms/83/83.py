# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        now = head
        while not (now is None or now.next is None):
            if now.val == now.next.val:
                now.next = now.next.next
                continue
            now = now.next
        return head