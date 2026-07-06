// Last updated: 7/6/2026, 6:50:38 PM
class Solution {
    public:
        void subset(vector<int>& nums, vector<vector<int>>& ans, vector<int>& arr,int i)
        {
            if(i==nums.size())
            {
                ans.push_back({arr});
                return;
            }
            arr.push_back(nums[i]);
            subset(nums,ans,arr,i+1);

            arr.pop_back();
            subset(nums,ans,arr,i+1);
        }

        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> arr;

            subset(nums,ans,arr,0);
            return ans;
        }
    
};