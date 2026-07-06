// Last updated: 7/6/2026, 6:49:54 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int sum=0;
        for(int i=0;i<size(nums);i++)
        {
            sum=nums[i]+sum;

        }
    
        
        return size(nums)*(size(nums)+1)/2-sum;
        


    }
};