// Last updated: 8/24/2026, 12:10:52 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
12        unordered_set<ListNode*> s;
13        ListNode *ptr1=head1;
14        while(ptr1!=nullptr)
15        {
16            s.insert(ptr1);
17            ptr1=ptr1->next;
18        }
19        ListNode *ptr2=head2;
20        while(ptr2!=nullptr)
21        {
22            if(s.contains(ptr2))
23                return ptr2;
24            else
25                s.insert(ptr2);
26            ptr2=ptr2->next;
27        }
28        return nullptr;
29    }
30};