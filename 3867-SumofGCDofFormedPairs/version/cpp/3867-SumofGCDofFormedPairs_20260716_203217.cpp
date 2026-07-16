// Last updated: 7/16/2026, 8:32:17 PM
1class Solution {
2public:
3    long long gcdSum(vector<int>& arr) {
4        int n=arr.size();
5        int curmx=INT_MIN;
6        vector<int> mx(n);
7        vector<int> prefixGcd(n);
8
9        for(int i=0;i<n;i++)
10        {
11            curmx=max(arr[i],curmx);
12            mx[i]=curmx;
13        }
14
15        for(int i=0;i<n;i++)
16        {
17            while(arr[i]>0&&mx[i]>0)
18            {
19                if(arr[i]>mx[i])
20                    arr[i]=arr[i]%mx[i];
21                else
22                    mx[i]=mx[i]%arr[i];
23            }
24            if(arr[i]==0)
25                prefixGcd[i]=mx[i];
26            else
27                prefixGcd[i]=arr[i];
28        }
29
30        sort(prefixGcd.begin(),prefixGcd.end());
31
32        int i=0;
33        int j=n-1;
34        long long sum=0;
35        while(i<j)
36        {
37            while(prefixGcd[i]>0&&prefixGcd[j]>0)
38            {
39                if(prefixGcd[i]>prefixGcd[j])
40                    prefixGcd[i]=prefixGcd[i]%prefixGcd[j];
41                else
42                    prefixGcd[j]=prefixGcd[j]%prefixGcd[i];
43            }
44            if(prefixGcd[i]==0)
45               sum=prefixGcd[j]+sum;
46            else
47                sum=prefixGcd[i]+sum;
48            
49            i++;
50            j--;
51        }
52        return sum;
53    }
54};