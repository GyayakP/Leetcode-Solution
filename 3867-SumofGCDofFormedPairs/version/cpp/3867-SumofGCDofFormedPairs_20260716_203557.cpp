// Last updated: 7/16/2026, 8:35:57 PM
1class Solution {
2public:
3    long long gcdSum(vector<int>& arr) {
4        int n=arr.size();
5        int curmx=0;
6        vector<int> prefixGcd(n);
7
8        for(int i=0;i<n;i++)
9        {
10            curmx=max(arr[i],curmx);
11            prefixGcd[i]=gcd(arr[i],curmx);
12        }
13
14        sort(prefixGcd.begin(),prefixGcd.end());
15
16        int i=0;
17        int j=n-1;
18        long long sum=0;
19        while(i<j)
20        {
21            sum+=gcd(prefixGcd[i],prefixGcd[j]);
22            i++;
23            j--;
24        }
25        return sum;
26    }
27};