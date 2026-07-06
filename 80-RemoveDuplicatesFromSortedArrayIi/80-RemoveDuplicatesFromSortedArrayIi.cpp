// Last updated: 7/6/2026, 6:50:37 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write = 0;
        int count = 0;

        for (int j = 0; j < nums.size(); j++) {

            if (j == 0 || nums[j] != nums[j - 1])
                count = 1;
            else
                count++;

            if (count <= 2) {
                nums[write] = nums[j];
                write++;
            }
        }

        return write;
    }
};