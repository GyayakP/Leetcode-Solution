// Last updated: 7/6/2026, 6:50:08 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<int> ans;
        int f = 1;
        for (int i=1; i<=n; i++) 
        {
            if(i<n && nums[i]==nums[i - 1]) 
            {
                f++;
            } 
            else {
                if (f>n/3) 
                {
                    ans.push_back(nums[i - 1]);
                }
                f=1;
            }
        }
        return ans;
    }
};