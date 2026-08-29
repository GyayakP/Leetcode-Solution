// Last updated: 8/29/2026, 6:45:53 PM
1class Solution {
2public:
3    int numberOfEmployeesWhoMetTarget(vector<int>& arr, int t) {
4        int count=0;
5        for(int i:arr)
6        {
7            if(i>=t)
8            {
9                count++;
10            }
11        }
12        return count;
13    }
14};