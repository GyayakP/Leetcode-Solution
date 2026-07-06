// Last updated: 7/6/2026, 6:51:07 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lb = 0;
        int ub = nums.size() - 1;
        int mid;
        while (lb <= ub) {
            mid = (lb + ub) / 2;
            if (nums[mid] == target) {
                return mid;
            } 
            else if (target < nums[mid]) {
                ub = mid - 1;
            } else {
                lb = mid + 1;
            }
        } 
        return lb;
        
    }
};