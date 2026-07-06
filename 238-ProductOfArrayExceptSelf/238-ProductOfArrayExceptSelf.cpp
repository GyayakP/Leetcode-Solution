// Last updated: 7/6/2026, 6:50:03 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n,0); 
        vector<int> l(n,1);
        vector<int> r(n,1);
        int p=1;
        for(int i=1;i<n;i++)
        {
            l[i]=l[i-1]*nums[i-1];
        }

        for(int i=n-2;i>=0;i--)
        {
            r[i]=r[i+1]*nums[i+1];
        }

        for(int i=0;i<n;i++)
        {
            a[i]=l[i]*r[i];
        }
        return a;

        
    }
};