// Last updated: 7/6/2026, 6:49:01 PM
class Solution {
public:
    int maxIceCream(vector<int>& cost, int coins) {
        int count=0;
        int x=0;
        sort(cost.begin(),cost.end());
        for(int i: cost)
        {
            x=i+x;
            if(x<=coins)
                count++;
            else 
                break;
        }
        return count;
    }
};