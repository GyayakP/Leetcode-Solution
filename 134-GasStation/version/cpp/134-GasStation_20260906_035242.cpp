// Last updated: 9/6/2026, 3:52:42 AM
1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        
5        int totalGas=0;
6        int totalCost=0;
7        int tank=0;
8        int start=0;
9
10        for (int i=0;i<gas.size();i++)
11        {
12            totalGas+=gas[i];
13            totalCost+=cost[i];
14            tank+=gas[i]-cost[i];
15            if (tank<0)
16            {
17                start=i+1;
18                tank=0;
19            }
20        }
21        if (totalGas<totalCost)
22        {
23            return -1;
24        }
25        return start;
26    }
27};