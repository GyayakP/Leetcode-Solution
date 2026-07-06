# Last updated: 7/6/2026, 6:50:33 PM
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        self.head=head
        self.front=self.head
        if self.head==None:
            return head
        self.temp=self.head.next
        while self.temp!=None:
            while self.temp!=None and self.front.val==self.temp.val:
                del_node=self.temp
                self.temp=self.temp.next
                del del_node
            self.front.next=self.temp
            self.front=self.temp
            if self.temp!=None:
                self.temp=self.temp.next
        return self.head
            

        