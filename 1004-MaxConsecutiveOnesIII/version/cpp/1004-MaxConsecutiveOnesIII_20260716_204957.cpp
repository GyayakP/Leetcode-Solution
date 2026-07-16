// Last updated: 7/16/2026, 8:49:57 PM
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int mxz=0;
5        int no_z=0;
6
7        int j=0;
8        for(int i=0;i<nums.size();i++)
9        {
10            if(nums[i]==0)
11            {
12                no_z++;
13            }
14            while(no_z>k)
15            {
16                if(nums[j]==0)
17                {
18                    no_z--;
19                }
20                j++;               
21            }
22            mxz=max(mxz,(i-j+1));        
23        }
24        return mxz;
25
26
27    }
28};