// Last updated: 7/6/2026, 6:50:27 PM
class Solution {
    public:
        void subset(vector<int>& nums, vector<vector<int>>& ans, vector<int>& arr,int i)
        {
            if(i==nums.size())
            {
                ans.push_back(arr);
                return;
            }
            arr.push_back(nums[i]);

            subset(nums,ans,arr,i+1);

            arr.pop_back();

            int j=i+1;
            while(j<nums.size() && nums[j]==nums[j-1])
            {
                j++;
            }
            subset(nums,ans,arr,j);
        }

        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            sort(nums.begin(),nums.end());

            vector<vector<int>> ans;
            vector<int> arr;

            subset(nums,ans,arr,0);
            return ans;
        }
    
};