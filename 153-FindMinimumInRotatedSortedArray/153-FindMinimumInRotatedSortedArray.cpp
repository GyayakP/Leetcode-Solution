// Last updated: 7/6/2026, 6:50:17 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<mini)
            {
                mini=nums[i];
            }
        }
        return mini;
    }
};