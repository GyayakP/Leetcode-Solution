// Last updated: 9/6/2026, 3:51:34 AM
1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        
5        int totalGas=0;
6        int totalCost=0;
7        int tank=0;
8        int start=0;
9
10        for (int i=0;i<gas.size();i++) {
11            totalGas+=gas[i];
12            totalCost+=cost[i];
13            tank+=gas[i]-cost[i];
14            if (tank<0) {
15                start=i+1;
16                tank=0;
17            }
18        }
19        if (totalGas<totalCost)
20            return -1;
21
22        return start;
23    }
24};