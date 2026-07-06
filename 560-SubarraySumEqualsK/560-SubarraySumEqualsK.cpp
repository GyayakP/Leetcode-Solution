// Last updated: 7/6/2026, 6:49:28 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;

        vector<int> sum (n,0);

        sum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            sum[i]=sum[i-1]+nums[i];
        }

        unordered_map<int,int> m;
        for(int j=0;j<n;j++)
        {
            if(sum[j]==k) count++;
            
            int val=sum[j]-k;

            if(m.find(val)!=m.end())
            {
                count=count+m[val];
            }

            if(m.find(sum[j])==m.end())
            {
                m[sum[j]]=0;
            }
            m[sum[j]]++;
        }
        return count;
    }
};