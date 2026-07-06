// Last updated: 7/6/2026, 6:50:25 PM
class Solution {
public:
    int maxProfit(vector<int>& price) {
        int mxp =0;
        int b=price[0];
        for(int i=1;i<price.size();i++)
        {
            if(price[i]>b)
                mxp=max(mxp,price[i]-b);
            b=min(b,price[i]);
        }
        return mxp;
        
    }
};