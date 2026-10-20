// Last updated: 10/20/2026, 8:25:31 PM
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
13    ListNode* reverseKGroup(ListNode* head, int k) {
14        int cnt=0;
15        ListNode* temp=head;
16        while(cnt<k)
17        {
18            if(temp==nullptr)
19            {
20                return head;
21            }
22            cnt++;
23            temp=temp->next;
24        }
25        ListNode* prenode=reverseKGroup(temp,k);
26        temp=head;
27        cnt=0;
28
29        while(cnt<k)
30        {
31            ListNode* nxt=temp->next;
32            temp->next=prenode;
33
34            prenode=temp;
35            temp=nxt;
36            cnt++;
37        }
38        return prenode;
39    }
40};