// Last updated: 7/7/2026, 9:31:35 PM
1class Solution {
2public:
3    int numWaterBottles(int nB, int nE) {
4        int total=nB;
5        while(nB/nE!=0)
6        {
7            total=(nB/nE)+total;
8            nB=(nB/nE)+(nB%nE);
9        }
10        return total;
11    }
12};