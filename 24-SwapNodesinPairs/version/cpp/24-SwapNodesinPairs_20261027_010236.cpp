// Last updated: 10/27/2026, 1:02:36 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* swapPairs(ListNode* head) {
14
15        if(head==nullptr||head->next==nullptr) return head;
16
17        ListNode* first=head;
18        ListNode* second=head->next;
19        ListNode* prev=nullptr;
20        while(first!=nullptr && second!=nullptr)
21        {
22            ListNode* third=second->next;
23            second->next=first;
24            first->next=third;
25
26            if(prev!=nullptr)
27                prev->next=second;
28            else
29                head=second;
30
31            prev=first;
32            first=third;
33
34            if(third!=nullptr)
35                second=third->next;
36            else
37                second=nullptr;
38        }
39        return head;
40    }
41};