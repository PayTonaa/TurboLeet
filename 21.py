# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        node1 = list1
        node2 = list2
        dummy = ListNode()
        tail = dummy

        while node1 is not None and node2 is not None:
            if node1.val < node2.val:
                tail.next = node1
                node1 = node1.next
            else:
                tail.next = node2
                node2 = node2.next
            tail = tail.next

        tail.next = node1 if node1 else node2
        return dummy.next   




s = Solution()
list1 = [1, 4]
list2 = [1,3,4]
print(s.mergeTwoLists(list1, list2))
