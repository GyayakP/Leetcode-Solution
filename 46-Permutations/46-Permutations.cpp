// Last updated: 7/6/2026, 6:50:59 PM
class Solution {
public:
    void permutation(vector<int>& nums, vector<vector<int>>& ans, int j)
    {
        if(j==nums.size())
        {
            ans.push_back({nums});
            return;
        }
        for(int i=j;i<nums.size();i++)
        {
            swap(nums[i],nums[j]);
            permutation(nums,ans,j+1);
            swap(nums[i],nums[j]);
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutation(nums,ans,0);

        return ans;
        
    }
};