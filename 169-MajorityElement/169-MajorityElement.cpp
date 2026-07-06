// Last updated: 7/6/2026, 6:50:13 PM
class Solution {
public:
    
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    
    }
};