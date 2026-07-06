// Last updated: 7/6/2026, 6:50:54 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a=0, b=INT_MIN;

        for(int num: nums)
        {
            a+=num;
            b=max(a,b);

            if(a<0)
            {
                a=0;
            }

        
        }
        return b;
    }
};