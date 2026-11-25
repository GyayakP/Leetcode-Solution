// Last updated: 11/25/2026, 8:00:23 PM
1class Solution {
2public:
3    int maxLength(vector<int>& nums) {
4        int ans=0;
5        int i=0;
6        int j=1;
7        int n=nums.size();
8        while(j!=n)
9        {
10            double p=1;
11            long long l=1;
12            long long g=nums[i];
13
14            for(int k=i;k<=j;k++)
15                p*=(long long)nums[k];
16
17            for(int k=i;k<=j;k++)
18                l=lcm(nums[k],l);
19
20            for(int k=i+1;k<=j;k++)
21                g=gcd(g,nums[k]);
22
23            if(p==l*g)
24                ans=max(ans,j-i+1);
25
26            if(i==n-2 && j==n-1)
27                break;
28            else if(j==n-1)
29            {
30                i++;
31                j=i+1;
32            }
33            else
34                j++;
35        }
36        return ans;
37    }
38};