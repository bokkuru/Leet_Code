# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        if not l1:
            return l2
        elif not l2:
            return l1
        elif l1.val < l2.val :
            first = l1
            l1 = l1.next
        else:
            first = l2
            l2 = l2.next
        tail = first
        while l1 or l2:
            if not l1:
                tail.next = l2
                l2 = None
            elif not l2:
                tail.next = l1
                l1 = None
            elif l1.val < l2.val:
                tail.next = l1
                tail = tail.next
                l1 = l1.next
                tail.next = None
            else:
                tail.next = l2
                tail = tail.next
                l2 = l2.next
                tail.next = None
        return first