// Last updated: 7/6/2026, 6:48:53 PM
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int n=cost.size();
        int i=n%3;
        int sum=0;
        if(i==2)
        {
            sum=cost[0]+cost[1];
        }
        else if(i==1)
            sum=cost[0];
        int j=n-1;
        while(i<j)
        {
            sum=cost[j]+cost[j-1]+sum;
            j=j-3;
        }
        return sum;
    }
};