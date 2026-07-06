// Last updated: 7/6/2026, 6:50:20 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int ele:nums)
        {
            x=x ^ ele;
        }
        return x;


    }
};