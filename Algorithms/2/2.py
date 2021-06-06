# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        head = None
        carry = 0
        while l1 or l2:
            tmp = carry
            if l1:
                tmp += l1.val
                l1 = l1.next
            if l2:
                tmp += l2.val
                l2 = l2.next
            new_node = ListNode(tmp%10)
            carry = tmp//10
            if head is None:
                head = new_node
                tail = head
            else:
                tail.next = new_node
                tail = tail.next

        if carry > 0:
            tail.next = ListNode(carry)

        return head