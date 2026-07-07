// Last updated: 7/7/2026, 11:11:46 PM
1class Solution {
2public:
3    int maxBottlesDrunk(int b, int e) {
4        int total=b;
5
6        while(b/e!=0)
7        {
8            
9            b=b-e+1;
10            total=total+1;
11            e++;
12        }
13        return total;
14    }
15};