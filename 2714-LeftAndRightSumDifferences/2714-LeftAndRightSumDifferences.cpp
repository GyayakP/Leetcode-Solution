// Last updated: 7/6/2026, 6:48:44 PM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int t=accumulate(nums.begin(), nums.end(), 0);
        vector<int> ans;
        int l =0;
        int r =t-nums[0];
        int a;
        a=abs(l-r);
        ans.push_back(a);
        int i=1;

        while(i<nums.size())
        {
            l=l+nums[i-1];
            r=r-nums[i];
            a=abs(l-r);
            ans.push_back(a);
            i++;
        }
        return ans;

    }
};