// Last updated: 7/6/2026, 6:48:35 PM
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1)
            return 0;
        int maxsum=0;
        int minsum=0;
        for(int i=n-1;i>=n-k;i--)
        {
            maxsum=nums[i]+maxsum;
        }
        for(int i=0;i<k;i++)
        {
            minsum=nums[i]+minsum;
        }
        return abs(maxsum-minsum);
    }
};